#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {3, 2, 3};
      int n = nums.size();

      // Brute Force Approach
      // int majorElement;
      // for (int i = 0; i < n; i++)
      // {
      //       int count = 1;
      //       for (int j = i + 1; j < n; j++)
      //       {
      //             if (nums[i] == nums[j])
      //             {
      //                   count++;
      //             }
      //       }
      //       if (count > n/2)
      //       {
      //             majorElement = nums[i];
      //             break;
      //       }
      // }

      // Optimized Brute Force Approach
      sort(nums.begin(), nums.end());
      int majorElement = nums[0];
      int presentCount = 1;
      for (int i = 1; i < n; i++)
      {

            if (nums[i] == nums[i - 1])
            {
                  presentCount++;
            }
            else
            {
                  presentCount = 1;
            }

            if (presentCount > n / 2)
            {
                  majorElement = nums[i];
                  break;
            }
      }

      cout << majorElement << endl;

      return 0;
}