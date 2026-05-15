#include <iostream>
#include <vector>
using namespace std;

int main()
{
      vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
      int n = matrix.size();
      int m = matrix[0].size();

      std::vector<std::vector<int>> vec(n, std::vector<int>(m, 1));

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  if (matrix[i][j] == 0)
                  {
                        // up vertical
                        for (int k = i; k >= 0; k--)
                        {
                              vec[k][j] = 0;
                        }
                        // down vertical
                        for (int k = i; k < n; k++)
                        {
                              vec[k][j] = 0;
                        }
                        // left horizontal
                        for (int k = j; k >= 0; k--)
                        {
                              vec[i][k] = 0;
                        }
                        // right horizontal
                        for (int k = j; k < m; k++)
                        {
                              vec[i][k] = 0;
                        }
                  }
            }
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < m; j++)
            {
                  cout << vec[i][j] << " ";
            }
            cout << endl;
      }

      return 0;
}