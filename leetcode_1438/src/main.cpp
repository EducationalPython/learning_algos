#include "../include/solution.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {4,2,2,2,4,4,2,2};
    int limit = 0;
    cout << Solution().longestSubarray(nums, limit) << '\n'; // Expected: 4
    return 0;
}