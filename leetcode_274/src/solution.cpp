#include "../include/solution.h"
#include <vector>
#include <algorithm>
using namespace std;


int Solution::hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end(), std::greater<int>());
    int h_index = 0;
    while(h_index < citations.size()) {
        if (citations[h_index] >= h_index + 1) {
            ++h_index;
        } else return h_index;
    }
    return h_index;
}