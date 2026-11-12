#include <iostream>
using namespace std;

int main()
{
      int nums[] = {-4, -1, 0, 3, 10};
      int n = sizeof(nums) / sizeof(nums[0]);

      for (int i = 0; i < n; i++)
      {
            nums[i] = nums[i] * nums[i];
      }

      sort(nums, nums + n);

      for (int i = 0; i < n; i++)
      {
            cout << nums[i] << " ";
      }
}