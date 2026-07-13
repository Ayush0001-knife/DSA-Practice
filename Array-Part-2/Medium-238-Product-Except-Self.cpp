#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
      int arr[] = {1, 2, 3, 4};
      int n = sizeof(arr) / sizeof(arr[0]);
      vector<int> ans;
      vector<int> prefix;
      prefix.push_back(1);
      deque<int> suffix;
      suffix.push_back(1);

      for (int i = 1; i < n; i++)
      {
            prefix.push_back(prefix[i - 1] * arr[i - 1]);
      }
      for (int i = n - 2; i >= 0; i--)
      {
            suffix.push_front(suffix[0] * arr[i + 1]);
      }

      for (int i = 0; i < n; i++)
      {
            ans.push_back(prefix[i] * suffix[i]);
      }

      for (int i = 0; i < n; i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}