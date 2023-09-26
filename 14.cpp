#include <iostream>
#include <algorithm>

using namespace std;

void findElements(int arr[], int n, int key) {
    sort(arr, arr+n);

    int i = 0, j = n-1;
    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == key) {
            cout << arr[i] << " " << arr[j] << endl;
            return;
        }
        else if (sum < key) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "No Such Elements Exist" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, key;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin >> key;

        findElements(arr, n, key);
    }

    return 0;
}
