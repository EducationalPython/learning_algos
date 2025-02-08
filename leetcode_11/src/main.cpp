#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << Solution().maxArea(height) << '\n';
    return 0;
}