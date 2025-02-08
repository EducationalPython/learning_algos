#include "../include/solution.h"
#include <vector>
#include <unordered_set>
using namespace std;

int Solution::maximumUniqueSubarray(vector<int>& nums) {
    int window_left_end = 0;
    int window_right_end = 0;
    int window_sum = 0;
    int max_window_sum = 0;
    unordered_set<int> number_seen;
    while(window_left_end < nums.size()) {
        while(window_right_end < nums.size() && number_seen.find(nums[window_right_end]) == number_seen.end()) {
            // not seen the element
            window_sum += nums[window_right_end];
            number_seen.insert(nums[window_right_end]);
            ++window_right_end;
        }
        max_window_sum = max(window_sum, max_window_sum);
        window_sum -= nums[window_left_end];
        number_seen.erase(nums[window_left_end]);
        ++window_left_end;
        if (window_right_end == nums.size()) break;
    }
    return max_window_sum;
}