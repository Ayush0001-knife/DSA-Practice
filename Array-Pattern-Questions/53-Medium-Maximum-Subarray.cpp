#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
      int n = nums.size();

      // Brute Force Approach
      // int maxSum = INT16_MIN;
      // for (int i = 0; i < n; i++)
      // {
      //       for (int j = i; j < n; j++)
      //       {
      //             int currSum = 0;

      //             for (int k = i; k <= j; k++)
      //             {
      //                   currSum += nums[k];
      //             }

      //             maxSum = max(currSum, maxSum);
      //       }
      // }

      // Optimized Approach
      int maxSum = INT16_MIN;
      for (int i = 0; i < n; i++)
      {
            int currSum = 0;
            for (int j = i; j < n; j++)
            {
                  currSum += nums[j];
                  maxSum = max(currSum, maxSum);
            }
      }

      cout << maxSum << endl;

      return 0;
}