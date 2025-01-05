#!/bin/bash

echo "Generating includes.h"
echo "#ifndef INCLUDES_H" > includes.h
echo "#define INCLUDES_H" >> includes.h

echo "Creating problem_map.h"
echo "#ifndef PROBLEM_MAP_H" > problem_map.h
echo "#define PROBLEM_MAP_H" >> problem_map.h
echo "#include <map>" >> problem_map.h
echo "#include <functional>" >> problem_map.h
echo "#include \"includes.h\"" >> problem_map.h
echo "std::map<std::string, std::function<void()>> getProblemMap() {" >> problem_map.h
echo "    return {" >> problem_map.h

for file in $(find probs -name '*.cpp'); do
    # Extract the filename without extension
    filename=$(basename "$file" .cpp)
    # Extract the problem ID (e.g., 1A, 2057A, 2057B) from the filename
    problem_id=$(echo "$filename" | cut -d'_' -f2-)
    # Add the `extern` declaration to includes.h
    echo "extern void solve_${filename}();" >> includes.h
    # Add the mapping entry to problem_map.h
    echo "        {\"$problem_id\", solve_${filename}}," >> problem_map.h
done

echo "    };" >> problem_map.h
echo "}" >> problem_map.h
echo "#endif" >> problem_map.h
echo "#endif" >> includes.h

echo "Compiling..."
g++ -o main main.cpp probs/*.cpp
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed."
fi
