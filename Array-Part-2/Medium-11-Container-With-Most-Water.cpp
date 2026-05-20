#include <iostream>
using namespace std;

int main()
{
      int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
      int n = sizeof(height) / sizeof(height[0]);
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

      return 0;
}