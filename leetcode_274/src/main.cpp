#include "../include/solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> citations = {3,0,6,1,5};
    cout << Solution().hIndex(citations) << '\n';
    return 0;
}