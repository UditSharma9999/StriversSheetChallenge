#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    unordered_set<int> cols, rows;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rows.find(i) != rows.end() || cols.find(j) != cols.end())
                matrix[i][j] = 0;
        }
    }
}