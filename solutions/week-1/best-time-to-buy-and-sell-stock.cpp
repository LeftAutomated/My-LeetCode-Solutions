#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0, start = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] - prices[start] > profit)
                profit = prices[i] - prices[start];
            if (prices[start] > prices[i])
                start = i;
        }

        return profit;
    }
};