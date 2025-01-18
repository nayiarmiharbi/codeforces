#!/bin/bash

# Color codes for output
RED='\033[31m'
GREEN='\033[32m'
YELLOW='\033[33m'
BLUE='\033[34m'
RESET='\033[0m'

# Generate includes.h dynamically
echo -e "${BLUE}Generating includes.h${RESET}"
echo "#ifndef INCLUDES_H" > includes.h
echo "#define INCLUDES_H" >> includes.h

# Create problem_map.h dynamically
echo -e "${BLUE}Creating problem_map.h${RESET}"
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
    echo "extern void ${filename}();" >> includes.h
    # Add the mapping entry to problem_map.h
    echo "        {\"$problem_id\", ${filename}}," >> problem_map.h
done

echo "    };" >> problem_map.h
echo "}" >> problem_map.h
echo "#endif" >> problem_map.h
echo "#endif" >> includes.h

# Compile the project
echo -e "${BLUE}Compiling...${RESET}"
g++ -o main main.cpp probs/*.cpp
if [ $? -eq 0 ]; then
    echo -e "${GREEN}Compilation successful!${RESET}"
else
    echo -e "${RED}Compilation failed.${RESET}"
    exit 1
fi

# Extract the "choice" from main.cpp
choice=$(grep -oP 'choice\s*=\s*"\K[^"]+' main.cpp)

if [ -z "$choice" ]; then
    echo -e "${RED}Error: Could not detect choice in main.cpp${RESET}"
    exit 1
fi

echo -e "${BLUE}Running problem $choice...${RESET}"

# Check if the input and output files exist
input_file="input/prob_${choice}_in.txt"
expected_output_file="output/prob_${choice}_out.txt"

if [ ! -f "$input_file" ] || [ ! -f "$expected_output_file" ]; then
    echo -e "${RED}Missing test files: ${input_file} or ${expected_output_file}${RESET}"
    exit 1
fi

# Run the program with the input file
./main < "$input_file" > temp_output.txt

# Normalize both the expected and actual output files (remove extra spaces, newlines, etc.)
# Strip trailing newlines, spaces, and compare
expected_output=$(cat "$expected_output_file" | tr -s '[:space:]' '\n' | sed 's/[[:space:]]*$//')
actual_output=$(cat temp_output.txt | tr -s '[:space:]' '\n' | sed 's/[[:space:]]*$//')

# Compare the outputs
if [ "$expected_output" == "$actual_output" ]; then
    echo -e "${GREEN}Test Passed: $choice${RESET}"
else
    echo -e "${RED}Test Failed: $choice${RESET}"
    echo -e "${YELLOW}Expected output:${RESET}"
    echo "$expected_output"
    echo -e "${YELLOW}Actual output:${RESET}"
    echo "$actual_output"
fi

# Clean up
rm temp_output.txt
