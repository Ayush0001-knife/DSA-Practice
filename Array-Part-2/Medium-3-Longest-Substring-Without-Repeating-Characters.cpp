#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
      string s = "bbbbb";
      int len = s.length();
      int maxCOunt = 0;

      if (s.length() == 1)
      {
            maxCOunt = 1;
      }
      else
      {
            for (int i = 0; i < len; i++)
            {
                  string newStr = "";
                  newStr = newStr + s[i];
                  for (int j = i + 1; j < len; j++)
                  {
                        if (newStr.find(s[j], 0) == string::npos)
                        {
                              newStr = newStr + s[j];
                        }
                        else
                        {
                              break;
                        }
                  }
                  int newLen = newStr.length();
                  maxCOunt = max(maxCOunt, newLen);
            }
      }

      cout << "Longest Substring length : " << maxCOunt << endl;

      return 0;
}