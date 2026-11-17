#include <iostream>
using namespace std;

int bruteForceApproach(vector<int> &nums, int left, int right)
{
      int n = nums.size();

      int count = 0;

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int maxi = INT16_MIN;
                  for (int k = i; k <= j; k++)
                  {
                        maxi = max(maxi, nums[k]);
                  }
                  if (maxi >= left && maxi <= right)
                  {
                        count++;
                  }
            }
      }

      return count;
}

int optimizedBruteForceApproach(vector<int> &nums, int left, int right)
{
      int n = nums.size();

      int count = 0;

      for (int i = 0; i < n; i++)
      {
            int maxi = INT16_MIN;
            for (int j = i; j < n; j++)
            {
                  maxi = max(maxi, nums[j]);
                  if (maxi >= left && maxi <= right)
                  {
                        count++;
                  }
            }
      }

      return count;
}

int optimalApproach(vector<int> &nums, int left, int right)
{
      int n = nums.size();

      int count = 0;
      int maxi = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            maxi = max(maxi, nums[i]);
            if (maxi >= left && maxi <= right)
            {
                  count++;
            }
            else
            {
                  i = i + 1;
            }
      }

      return count;
}

int main()
{
      vector<int> nums = {2, 9, 2, 5, 6};
      int left = 2;
      int right = 8;

      cout << optimalApproach(nums, left, right);

      return 0;
}
