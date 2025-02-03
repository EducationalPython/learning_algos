#include "../include/solution.h"
#include <vector>
#include <deque>

vector<int> Solution::maxSlidingWindow(vector<int>& nums, int k) {
    deque<size_t> max_deque;
    vector<int> result;
    result.reserve(nums.size());
    for(size_t index = 0; index < nums.size(); ++index) {
        if (index >= k && max_deque.front() <= index - k) max_deque.pop_front();
        while (!max_deque.empty() && nums[index] >= nums[max_deque.back()]) max_deque.pop_back();
        max_deque.push_back(index);
        if (index >= k - 1) result.push_back(nums[max_deque.front()]);
    }
    return result;
}