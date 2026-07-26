#include <iostream>
using namespace std;

int main()
{
      int nums[] = {5, 2, 6, 1};
      int n = sizeof(nums) / sizeof(nums[0]);
      vector<int> ans;

      for (int i = 0; i < n; i++)
      {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                  if (nums[i] > nums[j])
                  {
                        count += 1;
                  }
            }
            ans.push_back(count);
      }

      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}