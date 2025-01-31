#include <iostream>
#include <vector>
#include <algorithm>
#include "../include/solution.h"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;
    Solution solution;
    cout << solution.maxScore(cardPoints, k) << "\n";
    return 0;
}