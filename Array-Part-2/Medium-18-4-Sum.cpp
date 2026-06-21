#include <iostream>
using namespace std;

int main()
{
      int nums[] = {2, 2, 2, 2, 2};
      int n = sizeof(nums) / sizeof(nums[0]);

      sort(nums, nums + n);
      int target = 8;

      vector<vector<int>> ans;

      for (int i = 0; i < n; i++)
      {
            if (i > 0 && nums[i] == nums[i - 1])
                  continue;

            for (int j = i + 1; j < n - 2; j++)
            {
                  if (j > i + 1 && nums[j] == nums[j - 1])
                        continue;

                  int st = j + 1, end = n - 1;
                  while (st < end)
                  {
                        if (nums[i] + nums[j] + nums[st] + nums[end] == target)
                        {
                              cout << "[ " << nums[i] << "," << nums[j] << "," << nums[st] << "," << nums[end] << " ]" << endl;
                              st += 1;
                              end -= 1;
                              while (st < end && nums[st] == nums[st - 1])
                              {
                                    st += 1;
                              }
                              while (st < end && nums[end] == nums[end + 1])
                              {
                                    end -= 1;
                              }
                        }
                        else if (nums[i] + nums[j] + nums[st] + nums[end] < target)
                        {
                              st += 1;
                        }
                        else
                        {
                              end -= 1;
                        }
                  }
            }
      }

      return 0;
}