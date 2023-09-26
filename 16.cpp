#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int source, destination;
    cin >> source >> destination;
    
    if(arr[source][destination] == 1){
        cout << "Yes Path Exists";
    }else{
        cout << "No Such Path Exists";
    }
    return 0;
}
