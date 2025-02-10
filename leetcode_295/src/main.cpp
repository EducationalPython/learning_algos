#include "../include/solution.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> input = {"MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"};
    MedianFinder* obj = nullptr;
    for(const string& command : input) {
        if (command == "MedianFinder") {
            if (obj) obj->~MedianFinder();
            obj = new MedianFinder();
        } else if (command == "addNum") {
            int x;
            cin >> x;
            obj->addNum(x);
        } else {
            cout << obj->findMedian() << '\n';
        }
    }
    return 0;
}