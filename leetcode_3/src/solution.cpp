#include "../include/solution.h"
#include <string>
#include <array>
#include <algorithm>
using namespace std;

int Solution::lengthOfLongestSubstring(string s) {
    if (s.empty()) return 0;
    int longest_substring_length = 1;
    array<bool, 128> char_last_seen_index; // char_last_seen_index[i] is index in s, where char -1 was last seen
    fill(char_last_seen_index.begin(), char_last_seen_index.end(), false);
    int window_left_end = 0, window_right_end = 1;
    char_last_seen_index[s[0]] = true;
    while (window_right_end < s.size()) {
        // trying to add s[window_right_end] to the current_window
        while (char_last_seen_index[s[window_right_end]]) {
            char_last_seen_index[s[window_left_end]] = false; // the window only contains unique chars
            ++window_left_end;
        }
        char_last_seen_index[s[window_right_end]] = true;
        ++window_right_end;
        longest_substring_length = max(longest_substring_length, window_right_end - window_left_end);
    }
    return longest_substring_length;
}