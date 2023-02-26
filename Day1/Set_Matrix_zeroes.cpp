#include <bits/stdc++.h>

using namespace std;

void display(vector<vector<int>>& arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
}

void solve(vector<vector<int>>& arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0){
                for(int i=0; i<m; i++){
                    if(arr[i][j] != 0)
                    arr[i][j] = -1;
                }
                for(int j=0; j<n; j++){
                    if(arr[i][j] != 0)
                    arr[i][j] = -1;
                }
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == -1)
            arr[i][j] = 0;
        }
    }
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    solve(arr, m, n);
    display(arr);
}