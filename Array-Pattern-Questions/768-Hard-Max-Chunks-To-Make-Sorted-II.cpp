#include <iostream>
using namespace std;

int main()
{
      vector<int> arr = {1, 0, 2, 3, 4};
      int n = arr.size();

      vector<int> runningSum(n); // Creates n elements, initialized to 0

      for (int i = 0; i < n; i++)
      {
            if (i == 0)
            {
                  runningSum[i] = arr[i];
            }
            else
            {
                  runningSum[i] = runningSum[i - 1] + arr[i];
            }
      }

      int count = 0;

      for (int i = 0; i < n; i++)
      {
            if (runningSum[i] == (i * (i + 1) / 2))
            {
                  count += 1;
            }
      }

      cout << count << endl;

      return 0;
}
