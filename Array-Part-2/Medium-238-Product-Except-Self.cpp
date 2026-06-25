#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {-1, 1, 0, -3, 3};
      int n = nums.size();
      vector<int> ans;

      for (int i = 0; i < n; i++)
      {
            int val = 1;
            for (int j = 0; j < n; j++)
            {
                  if (i != j)
                  {
                        val *= nums[j];
                  }
            }
            ans.push_back(val);
      }

      for (int i = 0; i < n; i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}