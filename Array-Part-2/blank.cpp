#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      std::vector<std::vector<int>> intervals = {{1, 4}, {0, 0}};
      sort(intervals.begin(), intervals.end());

      int intervalsSize = intervals.size();

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  vector<int> newInterval;
                  if (intervals[i][0] == intervals[j][1])
                  {
                  }
                  else if (intervals[i][1] == intervals[j][0])
                  {
                  }
                  else if (intervals[i][1] > intervals[j][0])
                  {
                  }
            }
      }

      return 0;
}