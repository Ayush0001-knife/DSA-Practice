#include <iostream>
using namespace std;

int main()
{
      vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

      int rows = matrix.size();
      int cols = matrix[0].size();

      int target = 5;
      bool isFound = false;

      for (int i = 0; i < rows; i++)
      {
            int str = 0;
            int end = cols - 1;

            while (str <= end)
            {
                  int mid = str + (end - str) / 2;

                  if (matrix[i][mid] == target)
                  {
                        isFound = true;
                        break;
                  }
                  else if (matrix[i][mid] < target)
                  {
                        str = mid + 1;
                  }
                  else
                  {
                        end = mid - 1;
                  }
            }
      }

      return 0;
}