#include <iostream>
using namespace std;

// This is The Brute Force Approach with time complexity O(n^3)
int bruteForceApproach(int arr[], int n)
{
      int max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int curr_sum = 0;
                  for (int k = i; k <= j; k++)
                  {
                        curr_sum += arr[k];
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
int optimizedBruteForceApproach(int arr[], int n)
{
      int max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            int curr_sum = 0;
            for (int j = i; j < n; j++)
            {
                  curr_sum += arr[j];
                  max_sum = max(max_sum, curr_sum);
            }
      }
      return max_sum;
}

// This is the Kadane's Algorithm based Approach with time complexity O(n)
int kadanesApproach(int arr[], int n)
{
      int curr_sum = 0, max_sum = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            curr_sum += arr[i];
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
      int arr[] = {2, -3, 6, -5, 4, 2};
      // int arr[] = {1, 2, 3, 4, 5};
      int n = sizeof(arr) / sizeof(arr[0]);

      // int max_sum = bruteForceApproach(arr, n);
      // int max_sum = optimizedBruteForceApproach(arr, n);
      int max_sum = kadanesApproach(arr, n);

      cout << max_sum << endl;
      return 0;
}