#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> arr;
    vector<int> p = {intervals[0][0], intervals[0][1]};

    for (int i = 0; i < intervals.size(); i++)
    {
        if ((p[1]) >= (intervals[i][0]))
        {
            p[1] = max(p[1], intervals[i][1]);
        }
        else
        {
            arr.push_back(p);
            p[0] = intervals[i][0];
            p[1] = intervals[i][1];
        }
    }
    arr.push_back(p);

    return arr;
}
