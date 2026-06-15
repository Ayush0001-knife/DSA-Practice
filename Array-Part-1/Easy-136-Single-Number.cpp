#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int nums[] = {1};
      int n = sizeof(nums) / sizeof(nums[0]);

      int ans = 0;

      for (int i = 0; i < n; i++)
      {
            ans ^= nums[i];
      }

      cout << ans << endl;

      return 0;
}