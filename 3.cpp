#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int n, int key, int &comparisons) {
    int jump = sqrt(n);
    int left = 0, right = jump;
    while (right < n && arr[right] <= key) {
        comparisons++; 
        left = right;
        right += jump;
    }
    for (int i = left; i < min(right, n); i++) {
        comparisons++;
        if (arr[i] == key) {
            return i;
        }
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
        int index = jumpSearch(arr, n, key, comparisons);
        if (index != -1) {
            cout << "Present ";
        } else {
            cout << "Not Present ";
        }
        cout << comparisons << endl;
    }
    return 0;
}
