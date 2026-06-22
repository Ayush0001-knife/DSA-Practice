#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
      string s = "pwwkew";
      int len = s.length();
      int result = 0;

      if (s != " ")
      {
            int ind = 0;
            if (s.length() != 1 && s.length() > 1)
            {
                  for (int i = ind; i < len; i++)
                  {
                        string subString = "";

                        subString += s[i];
                        for (int j = i + 1; j < len; j++)
                        {

                              if (subString.find(s[j]) != string::npos)
                              {
                                    continue;
                              }
                              else
                              {
                                    subString += s[j];
                              }
                        }
                        int length = subString.length();
                        result = max(result, length);
                  }
            }
            else
            {
                  result = 1;
            }
      }
      else
      {
            result = 1;
      }

      cout << result;

      return 0;
}