#include "../include/solution.h"
#include <vector>
#include <cassert>
using namespace std;

bool Solution::canJump(vector<int>& nums) {
    assert(nums.size() > 0);
    int index_to_reach = (int) nums.size() - 1;
    while (index_to_reach) {
        int previous_index = index_to_reach - 1;
        while (previous_index >= 0 && previous_index + nums[previous_index] < index_to_reach) --previous_index;
        if (previous_index == -1) return false;
        index_to_reach = previous_index;
    }
    return true;
}