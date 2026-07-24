#include <iostream>
using namespace std;

int main()
{
      int heights[] = {2, 1, 5, 6, 2, 3};
      int width = 1;
      int n = sizeof(heights) / sizeof(heights[0]);

      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  cout << "[ ";
                  for (int k = i; k <= j; k++)
                  {
                        cout << heights[k] << " ";
                  }
                  cout << "] ";
            }
            cout << endl;
      }

      return 0;
}