#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int nums[] = {1};
      int n = sizeof(nums) / sizeof(nums[0]);

      int max_element = INT16_MIN;

      for (int i = 0; i < n; i++)
      {
            max_element = max(max_element, nums[i]);
      }

      vector<int> freqArr(max_element + 1, 0);

      for (int i = 0; i < n; i++)
      {
            freqArr[nums[i]]++;
      }

      for (int i = 0; i < max_element + 1; i++)
      {
            cout << freqArr[i] << " ";
      }

      cout << endl;

      for (int i = 0; i < max_element + 1; i++)
      {
            if (freqArr[i] == 1)
            {
                  cout << i << endl;
                  break;
            }
      }

      return 0;
}