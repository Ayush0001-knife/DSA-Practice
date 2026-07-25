#include <iostream>
using namespace std;

int main()
{
      int nums[] = {2, 4, 3, 5, 1};
      int n = sizeof(nums) / sizeof(nums[0]);
      int count = 0;

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