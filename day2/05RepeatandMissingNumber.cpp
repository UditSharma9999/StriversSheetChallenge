#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> ans;
    unordered_set<int> set;

    for (int i = 0; i < arr.size(); i++)
    {
        if (set.find(arr[i]) != set.end())
            ans.second = arr[i];
        set.insert(arr[i]);
    }
    for (int i = 1; i <= arr.size(); i++)
    {
        if (set.find(i) == set.end())
        {
            ans.first = i;
            break;
        }
    }
    return ans;
}
