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

      // Observation Based Approach
      // int maxProduct = INT16_MIN;

      // int preMax = 1;
      // int suffMax = 1;
      // for (int i = 0; i < n; i++)
      // {
      //       if (preMax == 0)
      //       {
      //             preMax = 1;
      //       }
      //       if (suffMax == 0)
      //       {
      //             suffMax = 1;
      //       }
      //       preMax *= nums[i];
      //       suffMax *= nums[n - 1 - i];
      //       maxProduct = max(maxProduct, max(preMax, suffMax));
      // }

      // Kadane's Algorithm
      int maxProduct = INT16_MIN;
      int currProduct = 1;
      for (int i = 0; i < n; i++)
      {
            currProduct *= nums[i];
            maxProduct = max(currProduct, maxProduct);
            if (currProduct == 0)
            {
                  currProduct = 1;
            }
      }

      currProduct = 1;

      for (int i = n - 1; i >= 0; i--)
      {
            currProduct *= nums[i];
            maxProduct = max(currProduct, maxProduct);
            if (currProduct == 0)
            {
                  currProduct = 1;
            }
      }

      cout << maxProduct << endl;

      return 0;
}