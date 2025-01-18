// #include <iostream>
// #include <map>
// #include <functional>
// #include "includes.h" // Includes all problem files dynamically

// using namespace std;

// // Function declarations
// // extern void solve_prob_1A();
// // extern void solve_prob_2057A();
// // extern void solve_prob_2057B();

// int main() {
//     // Map of problem numbers to their corresponding functions
//     map<int, function<void()>> problems = {
//         {1, solve_prob_1A},
//         {2, solve_prob_2057A},
//         {3, solve_prob_2057B}
//     };

//     cout << "Select problem to test (1, 2, 3): ";
//     int choice;
//     cin >> choice;

//     if (problems.find(choice) != problems.end()) {
//         problems[choice](); // Call the selected problem-solving function
//     } else {
//         cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }


#include <iostream>
// #include <map>
// #include <functional>
// #include "includes.h"
#include "problem_map.h" // Dynamically generated problem map

using namespace std;

int main() {
    auto problems = getProblemMap(); // Fetch the map of problem IDs to functions

    // cout << "Select problem to test by ID (e.g., 1A, 2057A, 2057B): ";
    string choice;
    // cin >> choice;
    choice = "2056C";

    if (problems.find(choice) != problems.end()) {
        problems[choice](); // Call the selected problem-solving function
    } else {
        cout << "Invalid choice! Please enter a valid problem ID." << endl;
    }

    return 0;
}



// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include "problem_map.h" // Dynamically generated problem map

// using namespace std;

// // Function to compare actual output with expected output
// bool compare_output(const string& actual_output, const string& expected_output) {
//     return actual_output == expected_output;
// }

// int main(int argc, char* argv[]) {
//     if (argc < 2) {
//         cerr << "Usage: " << argv[0] << " <problem_id>" << endl;
//         return 1;
//     }

//     string problem_id = argv[1]; // Get the problem ID from the command line argument
//     auto problems = getProblemMap(); // Fetch the map of problem IDs to functions

//     // Check if the problem ID exists in the problem map
//     if (problems.find(problem_id) != problems.end()) {
//         cout << "Running problem: " << problem_id << endl;
//         stringstream ss;
//         streambuf* cout_buf = cout.rdbuf(); // Save the current buffer

//         // Redirect stdout to capture the output
//         cout.rdbuf(ss.rdbuf());

//         problems[problem_id](); // Run the selected problem-solving function

//         // Restore the original cout buffer
//         cout.rdbuf(cout_buf);

//         // Get the actual output (from captured stdout)
//         string actual_output = ss.str();

//         // Define the file paths for input and expected output
//         string input_file = "input/prob_" + problem_id + "_in.txt";
//         string output_file = "output/prob_" + problem_id + "_out.txt";

//         // Read the expected output from the file
//         ifstream expected_file(output_file);
//         if (!expected_file.is_open()) {
//             cerr << "Error: Unable to open expected output file: " << output_file << endl;
//             return 1;
//         }

//         stringstream expected_buffer;
//         expected_buffer << expected_file.rdbuf();
//         string expected_output = expected_buffer.str();

//         // Compare the actual output with the expected output
//         if (compare_output(actual_output, expected_output)) {
//             cout << "Test Passed!" << endl;
//         } else {
//             cout << "Test Failed!" << endl;
//             cout << "Expected Output:" << endl << expected_output << endl;
//             cout << "Actual Output:" << endl << actual_output << endl;
//         }
//     } else {
//         cout << "Invalid choice! Please enter a valid problem ID." << endl;
//     }

//     return 0;
// }
