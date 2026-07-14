#include <iostream>
using namespace std;

int main()
{
      int nums[] = {1, 1, 1};
      int n = sizeof(nums) / sizeof(int);
      int k = 2;
      int count = 0;

      for (int i = 0; i < n; i++)
      {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                  sum += nums[k];
                  if (sum == k)
                  {
                        count++;
                  }
            }
      }

      cout << "Count of subarrays with sum equal to " << k << ": " << count << endl;

      return 0;
}