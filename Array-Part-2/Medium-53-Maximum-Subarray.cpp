#include <iostream>
using namespace std;

int main()
{
      int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
      int n = sizeof(nums) / sizeof(nums[0]);
      int max_sum = INT16_MIN;
      int curr_sum = 0;

      for (int i = 0; i < n; i++)
      {
            curr_sum += nums[i];
            max_sum = max(max_sum, curr_sum);
            if (curr_sum < 0)
            {
                  curr_sum = 0;
            }
      }

      cout << "Maximum Subarray Sum: " << max_sum << endl;

      return 0;
}