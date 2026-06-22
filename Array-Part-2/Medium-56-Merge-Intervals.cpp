#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
      // std::vector<std::vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
      // std::vector<std::vector<int>> intervals = {{1, 4}, {4, 5}};
      // std::vector<std::vector<int>> intervals = {{4, 7}, {1, 4}};
      // std::vector<std::vector<int>> intervals = {{1, 4}, {0, 4}};
      std::vector<std::vector<int>> intervals = {{1, 4}, {0, 0}};
      sort(intervals.begin(), intervals.end());

      int intervalsSize = intervals.size();

      vector<vector<int>> new_intervals;

      for (int i = 0; i < intervalsSize; i++)
      {
            for (int j = i + 1; j < intervalsSize; j++)
            {
                  if (intervals[i][0] == intervals[j][1])
                  {
                        vector<int> newInterval = {intervals[i][1], intervals[j][0]};
                        sort(newInterval.begin(), newInterval.end());
                        int Min = min({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        int Max = max({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        if (Min < newInterval[0])
                        {
                              newInterval[0] = Min;
                        }
                        if (Max > newInterval[1])
                        {
                              newInterval[1] = Max;
                        }
                        intervals[i] = newInterval;
                        intervals.erase(intervals.begin() + j);
                        intervalsSize -= 1;
                        j -= 1;
                  }
                  else if (intervals[i][1] == intervals[j][0])
                  {
                        vector<int> newInterval = {intervals[i][0], intervals[j][1]};
                        sort(newInterval.begin(), newInterval.end());

                        int Min = min({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        int Max = max({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        if (Min < newInterval[0])
                        {
                              newInterval[0] = Min;
                        }
                        if (Max > newInterval[1])
                        {
                              newInterval[1] = Max;
                        }
                        intervals[i] = newInterval;
                        intervals.erase(intervals.begin() + j);
                        intervalsSize -= 1;
                        j -= 1;
                  }
                  else if (intervals[i][1] > intervals[j][0])
                  {
                        vector<int> newInterval = {intervals[i][0], intervals[j][1]};
                        sort(newInterval.begin(), newInterval.end());

                        int Min = min({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        int Max = max({intervals[i][0], intervals[i][1], intervals[j][0], intervals[j][1]});
                        if (Min < newInterval[0])
                        {
                              newInterval[0] = Min;
                        }
                        if (Max > newInterval[1])
                        {
                              newInterval[1] = Max;
                        }
                        intervals[i] = newInterval;
                        intervals.erase(intervals.begin() + j);
                        intervalsSize -= 1;
                        j -= 1;
                  }
            }
      }

      int new_length = intervals.size();
      cout << "[ ";
      for (int i = 0; i < new_length; i++)
      {
            cout << "[";
            for (int j = 0; j < (int)intervals[i].size(); j++)
            {
                  cout << intervals[i][j];
                  if (j + 1 < (int)intervals[i].size())
                        cout << ",";
            }
            cout << "]";
            if (i + 1 < new_length)
                  cout << ", ";
      }
      cout << " ]" << endl;

      return 0;
}