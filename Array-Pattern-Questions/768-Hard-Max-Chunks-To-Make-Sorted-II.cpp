#include <iostream>
using namespace std;

int main()
{
      vector<int> arr = {2, 1, 3, 4, 4};
      int n = arr.size();

      vector<int> temp = arr;
      sort(temp.begin(), temp.end(), greater<>());

      if (arr == temp)
      {
            cout << "1";
      }
      else
      {
            int count = 0;
            for (int i = n - 2; i >= 0; i--)
            {

                  if (arr[i] > arr[i + 1])
                  {
                        if (i != 0)
                        {
                              continue;
                        }
                        else
                        {
                              count += 1;
                        }
                  }
                  else
                  {

                        if (i != 0)
                        {
                              count += 1;
                        }
                        else
                        {
                              count += 2;
                        }
                  }
            }
            cout << count;
      }

      return 0;
}
