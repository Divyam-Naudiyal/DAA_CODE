#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n, int &comp, int &shift) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
            shift++;
            comp++;
        }
        arr[j+1] = key;
        shift++;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int comp = 0, shift = 0;
        insertionSort(arr, n, comp, shift);
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Comparisons = " << comp << endl;
        cout << "Shifts = " << shift << endl;
    }
    return 0;
}
