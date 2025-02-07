#include "../include/solution.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "a", t = "aa";
    cout << Solution().minWindow(s, t) << '\n';
    return 0;
}