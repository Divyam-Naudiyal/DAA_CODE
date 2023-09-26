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
    
    // check for bipartite
    int source = 0;
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    int flag = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v=0;v<n;v++){
            if(arr[u][v] == 1){
                if(visited[v] == 0){
                    visited[v] = -visited[u];
                    q.push(v);
                }else if(visited[v] == visited[u]){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1){
        cout << "Not Bipartite";
    }else{
        cout << "Yes Bipartite";
    }
    return 0;
    

}