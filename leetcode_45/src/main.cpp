#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2,3,1,1,4};
    cout << Solution().jump(nums) << '\n';
    return 0;
}