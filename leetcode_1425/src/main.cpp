#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {10,-2,-10,-5,20};
    int k = 2;
    Solution solution;
    cout << solution.constrainedSubsetSum(nums, k) << '\n';
    return 0;
}