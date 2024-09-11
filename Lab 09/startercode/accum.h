#ifndef ACCUM_H
#define ACCUM_H

#include <vector>
#include <string>

template <class T>
T accum(const std::vector<T>& v);

template <>
int accum(const std::vector<int>& v);

template <>
double accum(const std::vector<double>& v);

template <>
std::string accum(const std::vector<std::string>& v);

#endif
