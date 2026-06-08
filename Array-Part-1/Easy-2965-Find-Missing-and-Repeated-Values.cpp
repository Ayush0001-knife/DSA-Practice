#include <iostream>
using namespace std;

int main()
{
      // int grid[2][2] = {{1, 3},
      //                   {2, 2}};

      // int n = 2, m = 2;

      int grid[3][3] = {{9, 1, 7},
                        {8, 9, 2},
                        {3, 4, 6}};

      int n = 3, m = 3;

      int repeated = -1;
      int missing = -1;

      int len = n * n + 1;

      vector<int> freqArr(len, 0);

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  freqArr[grid[i][j]]++;
            }
      }

      for (int i = 1; i < len; i++)
      {
            if (freqArr[i] > 1)
            {
                  repeated = i;
            }
            if (freqArr[i] == 0)
            {
                  missing = i;
            }
      }

      cout << "Answer is : [ " << repeated << " , " << missing << " ]" << endl;

      return 0;
}