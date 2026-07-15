#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      int nums[] = {1, 3, 4, 2, 2};
      int n = sizeof(nums) / sizeof(int);

      int biggestElement = nums[0];
      for (int i = 0; i < n; i++)
      {
            biggestElement = max(biggestElement, nums[i]);
      }

      vector<int> freqArr(biggestElement + 1, 0);

      for (int i = 0; i < n; i++)
      {
            freqArr[nums[i]]++;
      }

      for (int i = 0; i < freqArr.size(); i++)
      {
            if (freqArr[i] > 1)
            {
                  cout << "Duplicate number is: " << i << endl;
                  break;
            }
      }

      return 0;
}