#include <iostream>
using namespace std;

int main()
{
      vector<vector<char>> board = {
          {'A', 'B', 'C', 'E'},
          {'S', 'F', 'C', 'S'},
          {'A', 'D', 'E', 'E'}};

      int rows = board.size();
      int cols = board[0].size();

      string word = "ABCCED";
      int count = 0;
      string newWord = "";

      for (int i = 0; i < rows; i++)
      {
            for (int j = 0; j < cols; j++)
            {
                  if (board[i][j] == word[count])
                  {
                        newWord = newWord + board[i][j];
                        int r = i,
                            c = j;
                        count += 1;
                        bool found = false;
                        // vertical down
                        if (found != true)
                        {
                              for (int k = r + 1; k < rows; k++)
                              {
                                    if (board[k][c] == word[count])
                                    {
                                          newWord = newWord + board[k][c];
                                          count += 1;
                                          found = true;
                                          r = k;
                                          c = j;
                                    }
                              }
                        }
                        // horizontal left
                        if (found != true)
                        {
                              for (int k = c - 1; k >= 0; k--)
                              {
                                    if (board[r][k] == word[count])
                                    {
                                          newWord = newWord + board[r][k];
                                          count += 1;
                                          found = true;
                                          j = k;
                                    }
                              }
                        }
                        // horizontal right
                        if (found != true)
                        {
                              for (int k = c + 1; k < cols; k++)
                              {
                                    if (board[r][k] == word[count])
                                    {
                                          newWord = newWord + board[r][k];
                                          count += 1;
                                          found = true;
                                          j = k;
                                    }
                              }
                        }
                        if (found == false)
                        {
                              newWord.pop_back();
                              count -= 1;
                        }
                  }
            }
      }

      cout << newWord;

      return 0;
}