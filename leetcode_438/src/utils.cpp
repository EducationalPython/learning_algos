#include "../include/utils.h"
#include <array>
#include <algorithm>
#include <string>

array<int, 26> counterFromString(string s) {
    array<int, 26> result;
    fill(result.begin(), result.end(), 0);
    for(char c : s) {
        ++result[c - 'a'];
    }
    return result;
}

bool operator==(const array<int, 26>& lhs, const array<int, 26>& rhs) {
    for (size_t index = 0; index < 26; ++index) {
        if (lhs[index] != rhs[index]) return false;
    }
    return true;
}