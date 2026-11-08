#include <iostream>
using namespace std;

int main()
{

      char str[] = {'a'};

      int n = sizeof(str) / sizeof(str[0]);

      for (int i = 0; i < n; i++)
      {
            if (i > 0 && str[i] == str[i - 1])
            {
                  continue;
            }
            int count = 1;

            for (int j = i + 1; j < n; j++)
            {
                  if (str[i] == str[j])
                  {
                        count++;
                  }
            }
            if (count > 1)
            {
                  cout << str[i] << count;
            }
            else
            {
                  cout << str[i];
            }
      }

      return 0;
}