#ifndef PROBLEM_MAP_H
#define PROBLEM_MAP_H
#include <map>
#include <functional>
#include "includes.h"
std::map<std::string, std::function<void()>> getProblemMap() {
    return {
        {"118A", prob_118A},
        {"1A", prob_1A},
        {"2055A", prob_2055A},
        {"2055B", prob_2055B},
        {"2056A", prob_2056A},
        {"2056B", prob_2056B},
        {"2056C", prob_2056C},
        {"2057A", prob_2057A},
        {"2057B", prob_2057B},
        {"2057C", prob_2057C},
    };
}
#endif
