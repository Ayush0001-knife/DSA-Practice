#include <algorithm>
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
                        if (ans[i] == ans[i + 1])
                        {
                              // If the next permutation is the same as the current one, skip to the next unique permutation
                              while (i + 1 < ans.size() && ans[i] == ans[i + 1])
                              {
                                    i++;
                              }
                        }
                        if (i == ans.size() - 1)
                        {
                              sort(nums.begin(), nums.end());
                        }
                        else
                        {
                              nums = ans[i + 1];
                        }
                  }

                  break;
            }
      }

      for (int i = 0; i < nums.size(); i++)
      {
            cout << nums[i] << " ";
      }
}

void optimalApproach(vector<int> &nums)
{
      int idx = -1;
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
            sort(nums.begin(), nums.end());
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
      }

      for (int i = 0; i < nums.size(); i++)
      {
            cout << nums[i] << " ";
      }
}

int main()
{

      vector<int> nums = {3, 2, 1};

      optimalApproach(nums);

      return 0;
}