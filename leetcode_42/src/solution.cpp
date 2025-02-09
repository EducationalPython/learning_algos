#include "../include/solution.h"
#include <vector>
#include <numeric>
using namespace std;

int Solution::trap(vector<int>& height) {
    int current_level = 0;
    int left = 0;
    int right = (int) height.size() - 1;
    int virtual_water = 0;
    while (left <= right) {
        if (min(height[left], height[right]) > current_level) {
            virtual_water += (min(height[left], height[right]) - current_level) * (right - left + 1);
            current_level = min(height[left], height[right]);
        }
        if (height[left] < height[right]) ++left;
        else if (height[right] < height[left]) --right;
        else {
            --right;
            ++left;
        }
    }
    return virtual_water - accumulate(height.begin(), height.end(), 0);
}