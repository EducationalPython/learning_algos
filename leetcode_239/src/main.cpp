#include "../include/solution.h"
#include "../include/utils.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    cout << Solution().maxSlidingWindow(nums, k) << '\n';
    return 0;
}