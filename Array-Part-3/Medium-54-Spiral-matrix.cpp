#include <iostream>
using namespace std;

int main()
{
      int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
      int n = sizeof(matrix) / sizeof(matrix[0]);
      int m = sizeof(matrix[0]) / sizeof(matrix[0][0]);

      int strRow = 0, endRow = n - 1, strCol = 0, endCol = m - 1;
      vector<int> ans;

      while (strRow <= endRow && strCol <= endCol)
      {
            for (int i = strCol; i <= endCol; i++)
            {
                  ans.push_back(matrix[strRow][i]);
            }
            for (int i = strRow + 1; i <= endRow; i++)
            {
                  ans.push_back(matrix[i][endCol]);
            }

            if (strRow < endRow)
            {
                  for (int i = endCol - 1; i >= strCol; i--)
                  {
                        ans.push_back(matrix[endRow][i]);
                  }
            }
            if (strCol < endCol)
            {
                  for (int i = endRow - 1; i >= strRow + 1; i--)
                  {
                        ans.push_back(matrix[i][strCol]);
                  }
            }
            strRow++, strCol++;
            endRow--, endCol--;
      }

      for (int i = 0; i <= ans.size() - 1; i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}
