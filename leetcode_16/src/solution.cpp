#include "../include/solution.h"
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int distance(int x, int y) {
    return x > y ? x - y : y - x;
}

int Solution::threeSumClosest(vector<int>& nums, int target) {
    assert(nums.size() > 2);
    sort(nums.begin(), nums.end());
    int smallest_pointer = 0;
    int closest_sum = nums[0] + nums[1] + nums[2];
    for(; smallest_pointer <= nums.size() - 3; ++smallest_pointer) {
        int left_pointer = smallest_pointer + 1;
        int right_pointer = (int) nums.size() - 1;
        while(left_pointer < right_pointer) {
            // ss
            int sum = nums[smallest_pointer] + nums[left_pointer] + nums[right_pointer];
            if (distance(sum, target) < distance(closest_sum, target)) closest_sum = sum;
            if (closest_sum == target) return target;
            if (sum < target) ++left_pointer;
            else --right_pointer;
        }
    }
    return closest_sum;
}