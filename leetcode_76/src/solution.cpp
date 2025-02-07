#include "../include/solution.h"
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using counter = array<int, 52>; // Uppercase and Lowercase English letters

int indexFromChar(char c) {
    if (c <= 'Z') return c - 'A';
    return c - 'a' + 26;
}

counter counterFromString(string s) {
    counter result;
    fill(result.begin(), result.end(), 0);
    for(char c : s) {
        ++result[indexFromChar(c)];
    }
    return result;
}

bool operator<=(const counter& lhs, const counter& rhs) {
    for (size_t index = 0; index < 52; ++index) {
        if (lhs[index] > rhs[index]) return false;
    }
    return true;
}

string Solution::minWindow(string s, string t) {
    int window_left_end = 0;
    int window_right_end = 0;
    counter t_counter = counterFromString(t);
    counter window_counter = counterFromString("");
    int min_window_begin = s.size(), min_window_end = s.size();
    int min_window_length = INT_MAX;
    while(window_left_end < s.size()) {
        while(window_right_end < s.size() && !(t_counter <= window_counter)) {
            ++window_counter[indexFromChar(s[window_right_end])];
            ++window_right_end;
        }
        if (window_right_end == s.size() && !(t_counter <= window_counter)) break;
        if (window_right_end - window_left_end < min_window_length) {
            min_window_begin = window_left_end;
            min_window_end = window_right_end;
            min_window_length = window_right_end - window_left_end;
        }
        --window_counter[indexFromChar(s[window_left_end])];
        ++window_left_end;
    }
    return string(s.begin() + min_window_begin, s.begin() + min_window_end);
}