#include <iostream>
using namespace std;

int bruteForceApproach(int prices[], int n)
{
      int max_profit = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  int curr_profit = prices[j] - prices[i];
                  max_profit = max(max_profit, curr_profit);
            }
      }
      return max_profit;
}

int optimizedBruteForceApproach(int prices[], int n)
{
      int best_buy[n];
      best_buy[0] = INT16_MAX;

      for (int i = 1; i < n; i++)
      {
            best_buy[i] = min(best_buy[i - 1], prices[i - 1]);
      }

      int max_profit = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            int curr_profit = prices[i] - best_buy[i];
            max_profit = max(max_profit, curr_profit);
      }
      return max_profit;
}

int main()
{
      int prices[] = {7, 1, 5, 3, 6, 4};
      int n = sizeof(prices) / sizeof(prices[0]);

      int minPrice = prices[0];
      int maxProfit = 0;

      for (int i = 1; i < n; i++)
      {
            if (minPrice > prices[i])
            {
                  minPrice = prices[i];
            }
            else
            {
                  maxProfit = max(maxProfit, prices[i] - minPrice);
            }
      }

      cout << maxProfit << endl;

      return 0;
}