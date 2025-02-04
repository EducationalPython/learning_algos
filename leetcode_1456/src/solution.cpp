#include "../include/solution.h"
#include <string>
#include <deque>
using namespace std;

bool isVowel(char c) {
    bool result = false;
    switch (c)
    {
    case 'a':
        result = true;
        break;
    case 'e':
        result = true;
        break;
    case 'i':
        result = true;
        break;
    case 'o':
        result = true;
        break;
    case 'u':
        result = true;
        break;
    default:
        break;
    }
    return result;
}

int Solution::maxVowels(string s, int k) {
    int windowStartIndex = 0, windowEndIndex = 1;
    int vowelCountWindow = isVowel(s[0]);
    int maxVowelCount = vowelCountWindow;
    while(windowEndIndex < s.size()) {
        if (windowEndIndex - windowStartIndex >= k) {
            vowelCountWindow -= static_cast<int>(isVowel(s[windowStartIndex]));
            ++windowStartIndex;
        }
        vowelCountWindow += isVowel(s[windowEndIndex]);
        maxVowelCount = max(maxVowelCount, vowelCountWindow);
        ++windowEndIndex;
    }
    return maxVowelCount;
}