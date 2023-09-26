#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int>& arr, int low, int mid, int high, long long& inversions) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;
    long long comparisons = 0;

    while (i < n1 && j < n2) {
        comparisons++;
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
            inversions += n1 - i;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }

    return comparisons;
}

long long mergeSort(vector<int>& arr, int low, int high, long long& inversions) {
    long long comparisons = 0;

    if (low < high) {
        int mid = low + (high - low) / 2;
        comparisons += mergeSort(arr, low, mid, inversions);
        comparisons += mergeSort(arr, mid + 1, high, inversions);
        comparisons += merge(arr, low, mid, high, inversions);
    }

    return comparisons;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long inversions = 0;
        long long comparisons = mergeSort(arr, 0, n - 1, inversions);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "Comparisons: " << comparisons << endl;
        cout << "Inversions: " << inversions << endl; }
    return 0;
}
