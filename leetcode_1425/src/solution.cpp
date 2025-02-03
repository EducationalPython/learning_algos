#include "../include/solution.h"
#include <vector>
#include <deque>
#include <climits>
using namespace std;

int Solution::constrainedSubsetSum(vector<int>& nums, int k) {
    vector<int> sumEndingAtIdx(nums.size(), 0);
    deque<size_t> max_deq;
    int maxSum = INT_MIN;
    for(size_t index = 0; index < nums.size(); ++index) {
        if (index >= k && max_deq.front() < index - k) max_deq.pop_front();
        sumEndingAtIdx[index] = max_deq.empty() ? nums[index] : max(nums[index], nums[index] + sumEndingAtIdx[max_deq.front()]);
        while (!max_deq.empty() && sumEndingAtIdx[index] >= sumEndingAtIdx[max_deq.back()]) max_deq.pop_back();
        if (max_deq.empty()) maxSum = max(maxSum, sumEndingAtIdx[index]);
        max_deq.push_back(index);
    }
    return maxSum;
}