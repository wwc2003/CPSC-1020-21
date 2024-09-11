#include "accum.h"
#include <sstream>

template <class T>
T accum(const std::vector<T>& v) {
    T result = T();

    for (const auto& value : v) {
        result += value;
    }

    return result;
}

template <>
int accum(const std::vector<int>& v) {
    int result = 0;

    for (const auto& value : v) {
        result += value;
    }

    return result;
}

template <>
double accum(const std::vector<double>& v) {
    double result = 0.0;

    for (const auto& value : v) {
        result += value;
    }

    return result;
}

template <>
std::string accum(const std::vector<std::string>& v) {
    std::string result;

    for (const auto& value : v) {
        result += value + ", ";
    }

    if (!result.empty()) {
        result.pop_back();
        result.pop_back();
    }

    return result;
}
