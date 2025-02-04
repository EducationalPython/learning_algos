#include "../include/solution.h"
#include <vector>
#include <deque>
using namespace std;


int Solution::longestSubarray(vector<int>& nums, int limit) {
    int longestSubarrayLength = 1;
    deque<int> max_deque = {0}, min_deque = {0};
    int windowStartIndex = 0;
    int current_index = 1;
    while(current_index < nums.size()) {
        while (!max_deque.empty() && (nums[current_index] < nums[max_deque.front()] - limit || 
                                   nums[current_index] > nums[min_deque.front()] + limit)) {
            ++windowStartIndex;
            if (max_deque.front() < windowStartIndex) max_deque.pop_front();
            if (min_deque.front() < windowStartIndex) min_deque.pop_front();
        }
        // updating max_deque and min_deque with current_index
        while (!max_deque.empty() && nums[current_index] >= nums[max_deque.back()]) max_deque.pop_back();
        while (!min_deque.empty() && nums[current_index] <= nums[min_deque.back()]) min_deque.pop_back();
        max_deque.push_back(current_index);
        min_deque.push_back(current_index);
        ++current_index;
        longestSubarrayLength = max(current_index - windowStartIndex, longestSubarrayLength);
    }
    return longestSubarrayLength;
}