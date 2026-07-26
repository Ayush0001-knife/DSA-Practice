#include <iostream>
using namespace std;

int main()
{
      // int nums[] = {1, 3, 5, 10, 2, 6, 8, 9};
      int nums[] = {1, 3, 2, 3, 1};
      int n = sizeof(nums) / sizeof(nums[0]);
      vector<int> temp;
      int invsCount = 0;

      int st = 0, end = n - 1;
      int mid = (st + end) / 2;
      int i = st, j = mid + 1;

      while (i <= mid && j <= end)
      {
            if (nums[i] <= nums[j])
            {
                  i += 1;
            }
            else
            {
                  invsCount += (mid - i + 1);
                  j += 1;
            }
      }

      while (i <= mid)
      {
            i += 1;
      }
      while (j <= mid)
      {
            j += 1;
      }

      cout << invsCount;

      return 0;
}