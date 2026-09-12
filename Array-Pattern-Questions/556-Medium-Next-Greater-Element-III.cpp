#include <iostream>
using namespace std;

int main()
{
      int n = 2314;
      vector<int> nums;
      vector<int> greaterNums;

      while (n > 0)
      {

            int lastDigit = n % 10;
            nums.insert(nums.begin(), lastDigit); // to insert at the beginning of the vector
            n /= 10;
      }

      sort(nums.begin(), nums.end());

      for (int i = 0; i < nums.size(); i++)
      {
            int currNum = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                        }
      }

      for (int i = 0; i < nums.size(); i++)
      {
            cout << nums[i] << " ";
      }

      return 0;
}
