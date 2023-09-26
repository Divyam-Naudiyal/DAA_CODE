#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key, int &comparisons) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        comparisons++;
        if (arr[mid] == key) {
            return mid; 
        }
        if (arr[mid] > key) {
            return binarySearch(arr, l, mid - 1, key, comparisons);
        }
        return binarySearch(arr, mid + 1, r, key, comparisons);
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key, comparisons = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> key;
        int index = binarySearch(arr, 0, n - 1, key, comparisons);
        if (index != -1) {
            cout << "Present ";
        } else {
            cout << "Not Present ";
        }
        cout << comparisons << endl;
    }
    return 0;
}

