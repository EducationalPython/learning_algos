#include "../include/solution.h"
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {3,2,1,0,4};
    cout << boolalpha;
    cout << Solution().canJump(nums) << '\n';
    return 0;
}