#include <iostream>
using namespace std;

int main()
{
      int nums[] = {1, 3, -1, -3, 5, 3, 6, 7};
      int n = sizeof(nums) / sizeof(nums[0]);
      int k = 3;
      vector<int> ans;
      int strt = 0, end = k - 1;

      while (end < n)
      {
            int maxNum = nums[strt];
            for (int i = strt; i <= end; i++)
            {
                  maxNum = max(maxNum, nums[i]);
            }
            ans.push_back(maxNum);
            strt++;
            end++;
      }

      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}