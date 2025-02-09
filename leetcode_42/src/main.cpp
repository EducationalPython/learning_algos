#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << Solution().trap(height) << '\n';
    return 0;
}