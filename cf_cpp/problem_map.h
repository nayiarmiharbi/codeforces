#ifndef PROBLEM_MAP_H
#define PROBLEM_MAP_H
#include <map>
#include <functional>
#include "includes.h"
std::map<std::string, std::function<void()>> getProblemMap() {
    return {
        {"118A", solve_prob_118A},
        {"1A", solve_prob_1A},
        {"2057A", solve_prob_2057A},
        {"2057B", solve_prob_2057B},
    };
}
#endif
