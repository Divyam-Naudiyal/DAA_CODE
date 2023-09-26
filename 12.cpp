#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int pivot = arr[right];
        int i = left;
        for (int j = left; j < right; j++) {
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[right]);
        if (i == k - 1)
            return arr[i];
        else if (i > k - 1)
            right = i - 1;
        else
            left = i + 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        int kth = kthSmallest(arr, n, k);
        if (kth == -1)
            cout << "not present" << endl;
        else
            cout << kth << endl;
    }
    return 0;
}
