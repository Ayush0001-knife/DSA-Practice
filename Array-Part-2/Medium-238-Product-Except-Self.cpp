#include <iostream>
using namespace std;

int main()
{
      int arr[] = {0, 0};
      int n = sizeof(arr) / sizeof(arr[0]);
      vector<int> ans;

      int str1 = 0, str2 = 0;
      int multiply = 1;
      while (str1 != n && str2 < n)
      {
            if (str1 != str2)
            {
                  multiply *= arr[str2];
            }
            if (str2 == n - 1)
            {
                  ans.push_back(multiply);
                  multiply = 1;
                  str1 += 1;
                  str2 = 0;
            }
            else
            {
                  str2 += 1;
            }
      }

      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}