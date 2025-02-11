#include "../include/solution.h"
#include <vector>
#include <deque>
#include <cassert>
using namespace std;

int Solution::jump(vector<int>& nums) {
    assert(nums.size() > 0);
    int current_index = 0;
    int steps = 0;
    int max_index_for_current_steps = 0;
    int max_index_for_one_more_steps = -1;
    int index_to_reach = (int) nums.size() - 1;
    while(current_index != index_to_reach) {
        int max_reach_index = current_index + nums[current_index];
        if (current_index > max_index_for_current_steps) {
            ++steps;
            max_index_for_current_steps = max_index_for_one_more_steps;
            max_index_for_one_more_steps = max_reach_index;
        }
        if (max_reach_index > max_index_for_one_more_steps) max_index_for_one_more_steps = max_reach_index;
        if (max_reach_index >= index_to_reach) return steps + 1;
        ++current_index;
    }
    return steps;
}