class Solution {
public:
#include <vector>
    int maxProfit(vector<int>& prices) {
        int maxSum = 0, currSum = 0;
        for(int i = 1; i < prices.size(); i++) {
            currSum += prices[i] - prices[i-1];
            currSum = max(currSum, 0);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};