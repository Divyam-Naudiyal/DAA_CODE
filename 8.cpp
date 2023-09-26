#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n, int &comp, int &swaps) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            comp++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swaps++;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        int comp = 0, swaps = 0;
        selectionSort(arr, n, comp, swaps);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\ncomparisons: " << comp << "\nswaps: " << swaps << "\n";
    }
    return 0;
}
