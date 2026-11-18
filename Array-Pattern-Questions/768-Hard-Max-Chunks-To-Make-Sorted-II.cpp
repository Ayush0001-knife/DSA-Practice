
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      vector<int> arr = {5, 4, 3, 2, 1};

      int n = arr.size();

      vector<int> leftMax(n);
      leftMax[0] = arr[0];

      for (int i = 1; i < n; i++)
      {
            leftMax[i] = max(leftMax[i - 1], arr[i]);
      }

      vector<int> rightMin(n);
      rightMin[n - 1] = arr[n - 1];

      for (int i = n - 2; i >= 0; i--)
      {
            rightMin[i] = min(rightMin[i + 1], arr[i]);
      }

      int count = 1; // At least one chunk always exists

      for (int j = 0; j < n - 1; j++)
      {
            if (leftMax[j] <= rightMin[j + 1])
            {
                  count++;
            }
      }

      cout << count;

      return 0;
}
