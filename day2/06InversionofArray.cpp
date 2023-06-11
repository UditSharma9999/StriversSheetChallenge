#include <bits/stdc++.h>
long long merge(long long arr[], long long l, long long mid, long long r)
{
    long long inv = 0;
    long long n1 = mid - l + 1;
    long long n2 = r - mid;
    long long left[n1];
    long long right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + i + 1];

    long long i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return inv;
}

long long mergeSort(long long arr[], long long l, long long r)
{
    long long inv = 0;
    if (l < r)
    {
        long long mid = (l + r) / 2;

        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}

long long getInversions(long long *arr, int N)
{
    return mergeSort(arr, 0, N - 1);
}