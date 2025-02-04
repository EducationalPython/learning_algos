#include "../include/solution.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "beautiful";
    int k = 4;
    cout << Solution().maxVowels(s, k) << '\n';
    return 0;
}