#include <iostream>
#include <vector>
using namespace std;

int main()
{
      std::vector<std::vector<int>> matrix = {
          {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 24, 60}};

      int target = 3;

      int rows = matrix.size();
      int cols = matrix[0].size();

      for (int i = 0; i < rows; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  if (matrix[i][j] == target)
                  {
                        cout << "True";
                  }
            }
      }

      return 0;
}