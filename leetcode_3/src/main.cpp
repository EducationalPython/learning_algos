#include "../include/solution.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "pwwkew";
    cout << Solution().lengthOfLongestSubstring(s) << '\n';
    return 0;
}