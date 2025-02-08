#include "../include/solution.h"
#include <vector>
#include <cassert>
using namespace std;


int Solution::maxArea(vector<int>& height) {
    assert(height.size() >= 2);
    int left = 0;
    int right = (int) height.size() - 1;
    int max_area = 0;
    while(left < right) {
        max_area = max((right - left) * min(height[right], height[left]), max_area);
        if (height[right] < height[left]) {
            --right;
        } else if (height[left] < height[right])
        {
            ++left;
        }
        else {
            ++left;
            --right;
        }
    }
    return max_area;
}