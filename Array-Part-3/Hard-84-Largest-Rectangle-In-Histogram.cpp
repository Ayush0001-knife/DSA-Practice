#include <iostream>
using namespace std;

int main()
{
      int heights[] = {2, 4};
      int n = sizeof(heights) / sizeof(heights[0]);
      int maxArea = 0;

      for (int i = 0; i < n; i++)
      {
            int width = 1;
            for (int j = i + 1; j < n; j++)
            {
                  if (heights[j] >= heights[i])
                  {
                        width += 1;
                  }
                  else
                  {
                        break;
                  }
            }

            for (int j = i - 1; j >= 0; j--)
            {
                  if (heights[j] >= heights[i])
                  {
                        width += 1;
                  }
                  else
                  {
                        break;
                  }
            }

            maxArea = max(maxArea, (heights[i] * width));
      }

      cout << "Max Area is : " << maxArea << endl;

      return 0;
}