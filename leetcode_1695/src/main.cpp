#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {4,2,4,5,6};
    cout << Solution().maximumUniqueSubarray(nums) << '\n';
    return 0;
}