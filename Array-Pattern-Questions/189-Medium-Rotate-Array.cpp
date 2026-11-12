#include <iostream>
using namespace std;

int main()
{
      int nums[] = {1, 2, 3, 4, 5, 6, 7};
      int n = sizeof(nums) / sizeof(nums[0]);

      int k = 3;

      // int count = 1;
      // while (count <= k)
      // {

      //       int temp = nums[n - 1];

      //       for (int i = n - 2; i >= 0; i--)
      //       {
      //             nums[i + 1] = nums[i];
      //       }
      //       nums[0] = temp;
      //       count += 1;
      // }
      // for (int i = 0; i < n; i++)
      // {
      //       cout << nums[i] << " ";
      // }

      int temp1[k];

      for (int i = n - k; i < n; i++)
      {
            temp1[i - (n - k)] = nums[i];
      }

      int temp2[n - k];

      for (int i = 0; i < n - k; i++)
      {
            temp2[i] = nums[i];
      }

      // Print the rotated array
      for (int i = 0; i < k; i++)
      {
            cout << temp1[i] << " ";
      }
      for (int i = 0; i < n - k; i++)
      {
            cout << temp2[i] << " ";
      }

      return 0;
}