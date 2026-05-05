#include <iostream>
using namespace std;

bool nextPermutation1(int nums[], int n)
{
      for (int j = n - 2; j >= 0; j--)
      {
            if (nums[j] < nums[j + 1])
            {
                  for (int i = n - 1; i > j; i--)
                  {
                        if (nums[i] > nums[j])
                        {
                              swap(nums[i], nums[j]);
                              reverse(nums + j + 1, nums + n);
                              return true;
                        }
                  }
            }
      }

      return false;
}

int main()
{

      int nums[] = {1, 3, 2};
      int n = sizeof(nums) / sizeof(nums[0]);

      bool is_Largest = nextPermutation1(nums, n);

      if (!is_Largest)
      {
            sort(nums, nums + n);
      }

      cout << "[ ";
      for (int k = 0; k < n; k++)
      {
            cout << nums[k] << ",";
      }
      cout << " ]" << endl;

      return 0;
}