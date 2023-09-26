#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cin >> k;
        sort(arr, arr+n);
        int count = 0, i = 0, j = 1;
        while(j < n) {
            int diff = arr[j] - arr[i];
            if(diff == k) {
                count++;
                i++;
                j++;
            }
            else if(diff < k)
                j++;
            else
                i++;
        }
        cout << count << endl;
    }
    return 0;
}
