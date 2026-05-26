#include <iostream>
using namespace std;

// This is The Brute Force Approach with time complexity O(n^3)
int bruteForceApproach(int nums[], int n)
{
      int max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int curr_sum = 0;
                  for (int k = i; k <= j; k++)
                  {
                        curr_sum += nums[k];
                  }
                  if (curr_sum > max_sum)
                  {
                        max_sum = curr_sum;
                  }
            }
      }
      return max_sum;
}

// This is the Optimized Brute Force Approach with time complexity O(n^2)
int optimizedBruteForceApproach(int nums[], int n)
{
      int max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            int curr_sum = 0;
            for (int j = i; j < n; j++)
            {
                  curr_sum += nums[j];
                  max_sum = max(max_sum, curr_sum);
            }
      }
      return max_sum;
}

// This is the Kadane's Algorithm based Approach with time complexity O(n)
int kadanesApproach(int nums[], int n)
{
      int curr_sum = 0, max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            curr_sum += nums[i];
            max_sum = max(curr_sum, max_sum);
            if (curr_sum < 0)
            {
                  curr_sum = 0;
            }
      }
      return max_sum;
}

int main()
{
      int nums[] = {2, -3, 6, -5, 4, 2};
      // int nums[] = {1, 2, 3, 4, 5};
      int n = sizeof(nums) / sizeof(nums[0]);

      // int max_sum = bruteForceApproach(nums, n);
      // int max_sum = optimizedBruteForceApproach(nums, n);
      int max_sum = kadanesApproach(nums, n);

      cout << max_sum << endl;
      return 0;
}