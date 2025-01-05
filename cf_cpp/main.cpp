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
#include <map>
#include <functional>
#include "problem_map.h" // Dynamically generated problem map

using namespace std;

int main() {
    auto problems = getProblemMap(); // Fetch the map of problem IDs to functions

    // cout << "Select problem to test by ID (e.g., 1A, 2057A, 2057B): ";
    string choice;
    // cin >> choice;
    choice = "1A";

    if (problems.find(choice) != problems.end()) {
        problems[choice](); // Call the selected problem-solving function
    } else {
        cout << "Invalid choice! Please enter a valid problem ID." << endl;
    }

    return 0;
}
