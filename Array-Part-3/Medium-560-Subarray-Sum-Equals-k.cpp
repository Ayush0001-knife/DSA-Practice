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
            for (int j = i; j < n; j++)
            {
                  int sum = 0;
                  for (int k = i; k <= j; k++)
                  {
                        sum += nums[k];
                  }

                  if (sum == k)
                  {
                        count++;
                  }
            }
      }

      cout << "Count of subarrays with sum equal to " << k << ": " << count << endl;

      return 0;
}