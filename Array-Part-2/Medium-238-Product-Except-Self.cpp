#include <iostream>
using namespace std;

int main()
{
      vector<int> nums = {-1, 1, 0, -3, 3};
      int n = nums.size();
      vector<int> ans;

      for (int i = 0; i < n; i++)
      {
            int forwardMultiply = 1;
            int backwardMultiply = 1;

            int f = i + 1;
            int b = i - 1;

            while (f < n)
            {
                  forwardMultiply *= nums[f];
                  f = f + 1;
            }
            while (b >= 0)
            {
                  backwardMultiply *= nums[b];
                  b = b - 1;
            }

            ans.push_back(forwardMultiply * backwardMultiply);
      }

      for (int i = 0; i < n; i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}