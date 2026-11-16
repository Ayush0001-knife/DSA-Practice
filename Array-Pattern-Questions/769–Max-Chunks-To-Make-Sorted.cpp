#include <iostream>
using namespace std;

int main()
{
      vector<int> arr = {2, 0, 1};
      int n = arr.size();

      int count = 0;

      if (n == 1)
      {
            return 1;
      }
      else
      {
            for (int i = n - 2; i >= 0; i--)
            {
                  if (i == 0)
                  {

                        if (arr[i] > arr[i + 1])
                        {
                              count += 1;
                        }
                        else if (arr[i] < arr[i + 1])
                        {
                              count += 2;
                        }
                  }
                  else
                  {
                        if (arr[i] < arr[i + 1])
                        {
                              count += 1;
                        }
                  }
            }
      }

      if (count == 0)
      {
            cout << "Only 1 chunk" << endl;
      }
      else
      {
            cout << "Chunks are : " << count << endl;
      }

      return 0;
}
