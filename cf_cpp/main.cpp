#include <iostream>
#include "problem_map.h"

using namespace std;

int main() {
    auto problems = getProblemMap(); 

    string choice;
    // cin >> choice;
    choice = "2056C";

    if (problems.find(choice) != problems.end()) {
        problems[choice](); 
    } else {
        cout << "Invalid choice! Please enter a valid problem ID." << endl;
    }

    return 0;
}