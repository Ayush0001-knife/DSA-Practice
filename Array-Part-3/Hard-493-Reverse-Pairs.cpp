#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {1, 3, 2, 3, 1};
      int len = nums.size();
      int count = 0;

      std::sort(nums.begin(), nums.end());

      for (int i = len - 1; i >= 1; i--)
      {
            for (int j = 0; j < len; j++)
            {
                  if (nums[i] > (2 * nums[j]))
                  {
                        count += 1;
                  }
                  else
                  {
                        if (i == len - 1 && j == 0)
                        {
                              return count;
                        }
                        break;
                  }
            }
      }

      // Brute Force
      // for (int i = 0; i < n - 1; i++)
      // {
      //       for (int j = i + 1; j < n; j++)
      //       {
      //             if (nums[i] > (2 * nums[j]))
      //             {
      //                   count += 1;
      //             }
      //       }
      // }
      cout << count;

      return 0;
}