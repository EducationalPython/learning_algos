#include "../include/solution.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "leetcode";
    int k = 3;
    cout << Solution().maxVowels(s, k) << '\n'; // Expected: 2 "lee", "eet", "ode"
    return 0;
}