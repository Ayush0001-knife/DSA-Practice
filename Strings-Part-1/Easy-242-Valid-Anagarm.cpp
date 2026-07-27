#include <iostream>
using namespace std;

int main()
{
      string s = "aacc";
      string t = "ccac";

      bool isAnagaram = true;

      if (s.length() != t.length())
      {
            isAnagaram = false;
      }
      else
      {
            int count[26] = {0};

            for (int i = 0; i < s.length(); i++)
            {
                  count[s[i] - 'a'] += 1;
            }
            for (int i = 0; i < t.length(); i++)
            {
                  if (count[t[i] - 'a'] == 0)
                  {
                        isAnagaram = false;
                  }
                  count[s[i] - 'a']--;
            }
      }

      if (isAnagaram)
      {
            cout << "The strings are  anagram." << endl;
      }
      else
      {
            cout << "The strings are not anagram." << endl;
      }

      return 0;
}