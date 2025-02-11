#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> prices = {7,1,5,3,6,4};
    cout << Solution().maxProfit(prices) << '\n';
    return 0;
}