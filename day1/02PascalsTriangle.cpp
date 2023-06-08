#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int N)
{
    vector<vector<long long int>> tmp = {{1}, {1, 1}, {1, 2, 1}};
    if (N == 1)
        return {tmp[0]};
    if (N == 2)
        return {tmp[0], tmp[1]};
    if (N == 3)
        return {tmp[0], tmp[1], tmp[2]};

    N = N - 3;

    while (N != 0)
    {
        int n = tmp.size();
        int size = tmp[n - 1].size();
        vector<long long int> arr = {1};
        int j = 0, k = 1;

        while (k < size)
        {
            arr.push_back(tmp[n - 1][j] + tmp[n - 1][k]);
            j++;
            k++;
        }
        arr.push_back(1);
        tmp.push_back(arr);
        N--;
    }
    return tmp;
}
