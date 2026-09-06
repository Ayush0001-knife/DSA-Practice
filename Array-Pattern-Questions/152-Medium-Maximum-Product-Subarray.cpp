#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {-3, -1, -1};
      int n = nums.size();

      // Brute Force Approach
      // int maxProduct = INT16_MIN;
      // for (int i = 0; i < n; i++)
      // {
      //       for (int j = i; j < n; j++)
      //       {
      //             int currProduct = 1;

      //             for (int k = i; k <= j; k++)
      //             {
      //                   currProduct *= nums[k];
      //             }

      //             maxProduct = max(currProduct, maxProduct);
      //       }
      // }

      // Optimized Brute Force Approach
      // int maxProduct = INT16_MIN;
      // for (int i = 0; i < n; i++)
      // {
      //       int currProduct = 1;
      //       for (int j = i; j < n; j++)
      //       {
      //             currProduct *= nums[j];
      //             maxProduct = max(currProduct, maxProduct);
      //       }
      // }

      // Kadane's Algorithm
      int maxProduct = INT16_MIN;
      int currProduct = 1;
      for (int i = 0; i < n; i++)
      {
            currProduct *= nums[i];
            maxProduct = max(currProduct, maxProduct);
      }

      cout << maxProduct << endl;

      return 0;
}