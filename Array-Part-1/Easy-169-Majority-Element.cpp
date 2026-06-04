#include <iostream>
using namespace std;

int main()
{

      int nums[] = {2, 2, 1, 1, 1, 2, 2};
      int n = sizeof(nums) / sizeof(nums[0]);
      int major = INT16_MIN;
      int count_major = 0;

      for (int i = 0; i < n; i++)
      {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                  if (nums[i] == nums[j])
                  {
                        count += 1;
                  }
            }
            if (count_major < count)
            {
                  major = nums[i];
                  count_major = count;
            }
      }

      cout << "The Majority Element is : " << major << endl;

      return 0;
}