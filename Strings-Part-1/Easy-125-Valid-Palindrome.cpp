#include <iostream>
using namespace std;

int main()
{
      string s = " ";
      int len = s.length();

      string newStr = "";

      for (int i = 0; i < len; i++)
      {
            char ch = s[i];
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            {
                  if (ch >= 'A' && ch <= 'Z')
                  {
                        ch = ch + 32;
                  }
                  newStr += ch;
            }
      }

      int newLen = newStr.length();

      int left = 0, right = newLen - 1;
      bool isPlaindrome = true;

      while (left <= right)
      {
            if (newStr[left] != newStr[right])
            {
                  isPlaindrome = false;
            }
            left += 1;
            right -= 1;
      }

      if (isPlaindrome)
      {
            cout << "It is a Valid Palindrome";
      }
      else
      {
            cout << "It is a not a Valid Palindrome";
      }

      return 0;
}