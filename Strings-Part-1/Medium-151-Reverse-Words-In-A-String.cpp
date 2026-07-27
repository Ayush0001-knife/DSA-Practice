#include <iostream>
using namespace std;

int main()
{
      string s = "  hello world  ";
      int n = s.length();
      string newS = "";

      string reverseWord = "";

      for (int i = n - 1; i >= 0; i--)
      {
            if (s[i] != ' ')
            {
                  reverseWord += s[i];
            }
            else if (s[i] == ' ')
            {
                  reverse(reverseWord.begin(), reverseWord.end());
                  newS += reverseWord;
                  newS += " ";
                  reverseWord = "";
            }
            if (i == 0)
            {
                  reverse(reverseWord.begin(), reverseWord.end());
                  newS += reverseWord;
            }
      }

      cout << newS;

      return 0;
}