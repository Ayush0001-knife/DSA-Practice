#include <iostream>
#include <vector>
using namespace std;

void getPermutations(vector<int> &nums, vector<vector<int>> &ans, int idx)
{
      if (idx == nums.size())
      {
            ans.push_back(nums);
            return;
      }

      for (int i = idx; i < nums.size(); i++)
      {
            swap(nums[i], nums[idx]);
            getPermutations(nums, ans, idx + 1);
            swap(nums[i], nums[idx]);
      }
}

void BruteForceApproach(vector<int> &nums)
{
      vector<vector<int>> ans;
      int idx = 0;

      getPermutations(nums, ans, idx);

      // Sort all permutations in lexicographical order
      sort(ans.begin(), ans.end());

      // Find the current permutation
      for (int i = 0; i < ans.size(); i++)
      {
            if (ans[i] == nums)
            {
                  if (i == ans.size() - 1)
                  {
                        // If current permutation is the last one
                        sort(nums.begin(), nums.end());
                  }
                  else
                  {
                        // Select the next permutation
                        nums = ans[i + 1];
                  }

                  break;
            }
      }

      for (int i = 0; i < nums.size(); i++)
      {
            cout << nums[i] << " ";
      }
}

int main()
{

      vector<int> nums = {1, 2, 3};

      BruteForceApproach(nums);

      return 0;
}