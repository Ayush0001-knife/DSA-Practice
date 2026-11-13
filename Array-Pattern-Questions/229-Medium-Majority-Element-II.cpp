#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1};
      int n = nums.size();
      vector<int> result;
      sort(nums.begin(), nums.end());
      if (n == 0)
            return 0;

      // Brute Force Approach
      // int majorElement = nums[0];
      // for (int i = 0; i < n; i++)
      // {
      //       if (i > 0 && nums[i] == nums[i - 1])
      //       {
      //             continue; // Skip duplicates
      //       }
      //       int count = 1;
      //       for (int j = i + 1; j < n; j++)
      //       {
      //             if (nums[i] == nums[j])
      //             {
      //                   count++;
      //             }
      //       }
      //       if (count > n / 3)
      //       {
      //             majorElement = nums[i];
      //             result.push_back(majorElement);
      //       }
      // }

      // Optimized Brute Force Approach

      sort(nums.begin(), nums.end());
      int presentCount = 1;

      for (int i = 1; i < n; i++)
      {

            if (nums[i] == nums[i - 1])
            {
                  presentCount++;
            }
            else
            {
                  if (presentCount > n / 3)
                  {
                        result.push_back(nums[i - 1]);
                  }

                  presentCount = 1;
            }
      }

      // Check the last group because the loop ends without
      // encountering a different element after it.
      if (presentCount > n / 3)
      {
            result.push_back(nums[n - 1]);
      }

      for (int i = 0; i < result.size(); i++)
      {
            cout << result[i] << " ";
      }

      return 0;
}