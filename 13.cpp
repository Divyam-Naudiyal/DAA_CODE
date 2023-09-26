#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHARS = 26;

void maxOccurrences(char* arr, int n) {
    int count[MAX_CHARS] = {0}; 
    int maxCount = 0;
    char maxChar;

    for (int i = 0; i < n; i++) {
        count[arr[i] - 'a']++;
    }

    for (int i = 0; i < MAX_CHARS; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i + 'a';
        }
    }

    if (maxCount > 1) {
        cout << maxChar << " - " << maxCount << endl;
    } else {
        cout << "No Duplicates Present" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        maxOccurrences(arr, n);
    }

    return 0;
}
