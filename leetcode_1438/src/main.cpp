#include "../include/solution.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {8, 2, 4, 7};
    int limit = 4;
    cout << Solution().longestSubarray(nums, limit) << '\n'; // Expected: 2
    return 0;
}