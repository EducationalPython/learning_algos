#include "../include/solution.h"
#include "../include/utils.h"
#include <vector>
#include <array>
#include <string>
using namespace std;

vector<int> Solution::findAnagrams(string s, string p) {
    vector<int> result = {};
    int window_left_end = 0;
    int window_right_end = 1;
    auto p_counter = counterFromString(p);
    auto window_counter = counterFromString(string(1, s[0]));
    while(window_right_end != s.size()) {
        if (window_right_end - window_left_end == p.size()) {
            // compare counters
            if (p_counter == window_counter) result.push_back(window_left_end);
            // then move left end one step to the right and update window counter
            --window_counter[s[window_left_end] - 'a'];
            ++window_left_end;
        }
        if (window_right_end - window_left_end < p.size()) {
            // add window_right_end to the window
            ++window_counter[s[window_right_end] - 'a'];
            ++window_right_end;
        }
    }
    if (window_right_end - window_left_end == p.size() && p_counter == window_counter) result.push_back(window_left_end);
    return result;
}