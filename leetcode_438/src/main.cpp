#include "../include/solution.h"
#include "../include/utils.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "cbaebabacd";
    string p = "abc";
    cout << Solution().findAnagrams(s, p) << '\n';
    return 0;
}