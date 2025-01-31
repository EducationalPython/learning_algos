#include "../include/solution.h"
#include <numeric>
using namespace std;

int Solution::maxScore(vector<int>& cardPoints, int k) {
    // There are multiple solutions to this problem
    // One approach is dynamic programming
    // maxScore([a1, a2, ..., an], k) = max(a1 + maxScore([a2, ..., an], k - 1), maxScore([a1, ..., a{n-1}], k - 1) + an)
    // You might think that there are two many recursions this way, however if caching applied it still could be feasible
    // Still, it is somewhat ineffective approach even with caching.
    // Many more better solutions could be created if one notices that maxScore(cardPoints, k) = sum(cardPoints) - minConsecutiveSum(cardPoints, n - k)
    // So all one has to do is to find a subarray with minimal sum, which should be a standard problem.
    return accumulate(cardPoints.begin(), cardPoints.end(), 0) - minConsecutiveSum(cardPoints, cardPoints.size() - k);
}

int minConsecutiveSum(const vector<int>& cardPoints, int k) {
    // To find a minimal sum of a subarray, one should just remember that sums are very convenient functions.
    // You can count the sum for a subarray [ai, ..., aj] and then the next subarray's sum is just sum([ai, ..., aj]) - ai + a{j+1}
    // And the last thing you need to remember about is int constraints. MAX_INT, MIN_INT, etc.
    // But due to problem constraints one can be sure we will never hit the limits for int; otherwise we can change int to int64_t.
    if (k == 0) return 0;
    int sum = 0;
    int minSum = -1;
    for(int index=0; index < cardPoints.size(); ++index) {
        if (index >= k) {
            sum -= cardPoints[index - k];
        }
        sum += cardPoints[index];
        if (index >= k - 1 && (sum < minSum || minSum == -1)) {
            minSum = sum;
        }
    }
    return minSum;
}
