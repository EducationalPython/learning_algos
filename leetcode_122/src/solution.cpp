#include "../include/solution.h"
#include <vector>
using namespace std;

int Solution::maxProfit(vector<int>& prices) {
    int max_profit = 0;
    int buy_index = 0;
    while(buy_index < prices.size()) {
        int sell_index = buy_index;
        while(sell_index + 1 < prices.size() && prices[sell_index + 1] >= prices[sell_index]) ++sell_index;
        max_profit += prices[sell_index] - prices[buy_index];
        buy_index = sell_index + 1;
    }
    return max_profit;
}