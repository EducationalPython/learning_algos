#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <array>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << '[';
    for(auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin()) os << ',';
        os << *it;
    }
    os << ']';
    return os;
}

array<int, 26> counterFromString(string s);

bool operator==(const array<int, 26>& lhs, const array<int, 26>& rhs);