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
    int windowStartIndex = -1, windowEndIndex = 0;
    deque<int> vowelIndexDeque;
    size_t maxVowelCount = 0;
    while(windowEndIndex < s.size()) {
        if (windowEndIndex - windowStartIndex >= k) {
            ++windowStartIndex;
        }
        if (!vowelIndexDeque.empty() && vowelIndexDeque.front() < windowStartIndex) vowelIndexDeque.pop_front();
        if (isVowel(s[windowEndIndex])) vowelIndexDeque.push_back(windowEndIndex);
        ++windowEndIndex;
        maxVowelCount = max(maxVowelCount, vowelIndexDeque.size());
    }
    return maxVowelCount;
}