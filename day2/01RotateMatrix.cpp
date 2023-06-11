#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &matrix, int n, int m)
{

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            swap(matrix[i][j], matrix[j][i]);

    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j <= k)
        {
            swap(matrix[i][j], matrix[i][k]);
            j++;
            k--;
        }
    }
}