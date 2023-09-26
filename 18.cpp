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

    // check for cycles in  graph
    int flag = 0;
    for(int i=0;i<n;i++){
        if(visited[i] == 0){
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                for(int v=0;v<n;v++){
                    if(arr[u][v] == 1){
                        if(visited[v] == 0){
                            visited[v] = 1;
                            q.push(v);
                        }else if(visited[v] == 1){
                            flag = 1;
                            break;
                        }
                    }
                }
                if(flag == 1){
                    break;
                }
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 1){
        cout << "Yes Cycle Exists";
    }else{
        cout << "No Cycle Exists";
    }
    return 0;
}