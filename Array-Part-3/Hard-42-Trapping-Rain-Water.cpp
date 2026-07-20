#include <iostream>
using namespace std;

int main()
{
      int height[] = {4,
                      2,
                      0,
                      3,
                      2,
                      5};

      int n = sizeof(height) / sizeof(height[0]);
      int totalWater = 0;

      // for (int i = 1; i < n - 1; i++)
      // {
      //       int leftMax = INT_MIN, rightMax = INT_MIN;

      //       for (int j = i - 1; j >= 0; j--)
      //       {
      //             leftMax = max(leftMax, height[j]);
      //       }
      //       for (int j = i + 1; j < n; j++)
      //       {
      //             rightMax = max(rightMax, height[j]);
      //       }

      //       int waterTrapped = min(leftMax, rightMax) - height[i];
      //       if (waterTrapped > 0)
      //       {
      //             totalWater += waterTrapped;
      //       }
      // }

      int LeftMaxArr[n];
      int RightMaxArr[n];

      LeftMaxArr[0] = INT_MIN;
      RightMaxArr[n - 1] = INT_MIN;

      for (int i = 1; i < n; i++)
      {
            LeftMaxArr[i] = max(LeftMaxArr[i - 1], height[i - 1]);
      }

      for (int i = n - 2; i >= 0; i--)
      {
            RightMaxArr[i] = max(RightMaxArr[i + 1], height[i + 1]);
      }

      for (int i = 1; i < n - 1; i++)
      {
            int waterTrapped = min(LeftMaxArr[i], RightMaxArr[i]) - height[i];
            if (waterTrapped > 0)
            {
                  totalWater += waterTrapped;
            }
      }

      cout << "Total water trapped: " << totalWater << endl;
      return 0;
}