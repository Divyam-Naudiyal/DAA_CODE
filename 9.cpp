#include <bits/stdc++.h>
using namespace std;
string findDuplicates(int arr[], int n) {
    sort(arr, arr + n); 
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            return "YES"; 
        }}
    return "NO"; 
}
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; }
        cout << findDuplicates(arr, n) << endl; 
    }
    return 0;
}
