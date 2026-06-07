#include <iostream>
using namespace std;

int partition(int nums[], int st, int end)
{
      int i = st - 1, pivot = nums[end];

      for (int j = st; j < end; j++)
      {
            if (nums[j] <= pivot)
            {
                  i += 1;
                  swap(nums[j], nums[i]);
            }
      }
      i += 1;
      swap(nums[i], nums[end]);
      return i;
}

void quickSort(int nums[], int st, int end)
{
      if (st >= end)
      {
            return;
      }
      int pivotIndex = partition(nums, st, end);
      quickSort(nums, st, pivotIndex - 1);
      quickSort(nums, pivotIndex + 1, end);
}

int main()
{
      int nums[] = {2, 0, 2, 1, 1, 0};
      int n = sizeof(nums) / sizeof(nums[0]);

      quickSort(nums, 0, n - 1);

      for (int i = 0; i < n; i++)
      {
            cout << nums[i] << " ";
      }

      return 0;
}