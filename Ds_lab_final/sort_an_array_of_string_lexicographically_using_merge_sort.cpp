#include <bits/stdc++.h>

using namespace std;

// Merge function to merge two sorted subarrays into one sorted array
void mergeSorted(vector<string> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<string> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

// Merge Sort function to recursively divide the array into two halves and merge them
void SortArray(vector<string> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        SortArray(arr, left, mid);
        SortArray(arr, mid + 1, right);

        mergeSorted(arr, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SortArray(arr, 0, arr.size() - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
