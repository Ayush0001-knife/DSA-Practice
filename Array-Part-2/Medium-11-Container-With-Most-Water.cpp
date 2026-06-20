#include <iostream>
using namespace std;

void bruteForceApproach(int height[], int n)
{
      int maxVolume = 0;

      for (int i = 0; i < n; i++)
      {
            int currVol = 0;
            for (int j = i + 1; j < n; j++)
            {
                  currVol = max((min(height[i], height[j]) * (j - i)), currVol);
            }
            maxVolume = max(maxVolume, currVol);
      }

      cout << "Total water Trapped : " << maxVolume << endl;
}

void twoPointerApproach(int height[], int n)
{
      int leftPtr = 0, rightPtr = n - 1;
      int maxVolume = 0;

      while (leftPtr < rightPtr)
      {
            int currVol = min(height[leftPtr], height[rightPtr]) * (rightPtr - leftPtr);
            maxVolume = max(maxVolume, currVol);

            if (height[leftPtr] < height[rightPtr])
                  leftPtr++;
            else
                  rightPtr--;
      }

      cout << "Total water Trapped : " << maxVolume << endl;
}

int main()
{
      int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
      int n = sizeof(height) / sizeof(height[0]);

      bruteForceApproach(height, n);
      twoPointerApproach(height, n);

      return 0;
}