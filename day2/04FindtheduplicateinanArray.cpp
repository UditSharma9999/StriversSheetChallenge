#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
	int i = 0, idx;

	while (i < n)
	{
		int correct = arr[i] - 1;
		if (arr[i] != arr[correct])
			swap(arr[i], arr[correct]);
		else
			i++;
	}

	for (int i = 0; i < n; i++)
		if (arr[i] != i + 1)
		{
			idx = arr[i];
			break;
		}

	return idx;
}
