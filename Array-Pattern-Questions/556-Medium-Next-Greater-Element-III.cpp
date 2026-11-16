#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int nextPermutation(vector<int> &nums)
{
      int idx = -1;
      long long temp = 0;

      for (int i = nums.size() - 2; i >= 0; i--)
      {
            if (nums[i] < nums[i + 1])
            {
                  idx = i;
                  break;
            }
      }

      if (idx == -1)
      {
            cout << -1;
            return -1;
      }
      else
      {
            for (int i = nums.size() - 1; i >= idx; i--)
            {
                  if (nums[idx] < nums[i])
                  {
                        swap(nums[idx], nums[i]);
                        break;
                  }
            }
            reverse(nums.begin() + idx + 1, nums.end());

            for (int i = 0; i < nums.size(); i++)
            {
                  temp *= 10;
                  temp = (temp + nums[i]);
            }
            if (temp > INT_MAX)
            {
                  return -1;
            }
            else
            {
                  return temp;
            }
      }
}

int main()
{
      int n = 12;
      int temp = n;
      vector<int> nums;

      while (temp > 0)
      {

            int lastDigit = temp % 10;
            nums.insert(nums.begin(), lastDigit); // to insert at the beginning of the vector
            temp /= 10;
      }

      nextPermutation(nums);

      return 0;
}
