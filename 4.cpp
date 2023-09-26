#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int key, bool searchFirst)
{
    int result = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            if (searchFirst)
                right = mid - 1;
            else
                left = mid + 1;
        }
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return result;
}

void searchKey(int arr[], int n, int key)
{
    int first = binarySearch(arr, 0, n-1, key, true);
    if (first == -1)
    {
        cout << "Key not present" << endl;
        return;
    }
    int last = binarySearch(arr, 0, n-1, key, false);
    int count = last - first + 1;
    cout << key << " - " << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> key;
        searchKey(arr, n, key);
    }
    return 0;
}
