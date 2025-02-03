#pragma once
#include <vector>
#include <fstream>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << '[';
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ',';
        os << *it;
    }
    os << ']';
    return os;
}