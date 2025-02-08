#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    cout << Solution().threeSumClosest(nums, target) << '\n';
    return 0;
}