#include <iostream>
using namespace std;

int main()
{
      int nums[] = {-1, 0, 1, 2, -1, -4};
      int n = sizeof(nums) / sizeof(nums[0]);
      sort(nums, nums + n);
      vector<vector<int>> ans;
      bool isAns = false;

      for (int i = 0; i < n; i++)
      {

            // Skip duplicate first element
            if (i > 0 && nums[i] == nums[i - 1])
                  continue;

            int st = i + 1;
            int end = n - 1;

            while (st < end)
            {

                  int sum = nums[i] + nums[st] + nums[end];

                  if (sum == 0)
                  {

                        ans.push_back({nums[i], nums[st], nums[end]});
                        isAns = true;
                        st++;
                        end--;

                        // Skip duplicate left values
                        while (st < end && nums[st] == nums[st - 1])
                              st++;

                        // Skip duplicate right values
                        while (st < end && nums[end] == nums[end + 1])
                              end--;
                  }

                  else if (sum < 0)
                  {
                        st++;
                  }

                  else
                  {
                        end--;
                  }
            }
      }

      return 0;
}