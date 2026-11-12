#include <iostream>
#include <cstring>
using namespace std;

int main()
{
      char chars[] = "aabbccc";
      char newchars[100] = "";

      int n = strlen(chars);

      for (int i = 0; i < n; i++)
      {
            if (i > 0 && chars[i] == chars[i - 1])
            {
                  continue;
            }

            char ch = chars[i];
            int count = 1;

            for (int j = i + 1; j < n; j++)
            {
                  if (ch == chars[j])
                  {
                        count++;
                  }
            }

            int len = strlen(newchars);

            newchars[len++] = ch;

            if (count > 1)
            {
                  newchars[len++] = count + '0';
            }

            newchars[len] = '\0';
      }

      cout << strlen(newchars) << endl;

      return 0;
}