#include <iostream>
using namespace std;

int main()
{
      int nums1[] = {};
      int nums2[] = {1};

      int m = 0, n = 1;
      int l = m + n;

      for (int i = 0; i < n; i++)
      {
            nums1[i + m] = nums2[i];
      }

      sort(nums1, nums1 + l);

      for (int i = 0; i < l; i++)
      {
            cout << nums1[i] << " ";
      }

      return 0;
}
