#include <iostream>
#include <vector>
using namespace std;

void getPermutations(vector<int> &nums, int idx, vector<vector<int>> &ans, int n)
{
      if (idx == n)
      {
            ans.push_back({nums});
            return;
      }

      for (int i = idx; i < n; i++)
      {
            swap(nums[idx], nums[i]);
            getPermutations(nums, idx + 1, ans, n);
            swap(nums[idx], nums[i]);
      }
}

int main()
{
      vector<int> nums = {1, 2, 3};
      int n = nums.size();

      vector<vector<int>> ans;

      int idx = 0;

      getPermutations(nums, idx, ans, n);

      for (int i = 0; i < ans.size(); i++)
      {
            for (int j = 0; j < ans[i].size(); j++)
            {
                  cout << ans[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}