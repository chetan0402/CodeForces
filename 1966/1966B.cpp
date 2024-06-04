#include <iostream>
#include<vector>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    char topLeft=arr[0][0];
    char topRight=arr[0][m-1];
    char bottomLeft=arr[n-1][0];
    char bottomRight=arr[n-1][m-1];
    if(topLeft==bottomRight || topRight==bottomLeft){
        cout << "YES" << endl;
        return;
    }
    if(topLeft==topRight){
        for(int j=1;j<m-1;j++){
            if(arr[n-1][j]==topLeft){
                cout << "YES" << endl;
                return;
            }
        }
    }
    if(topRight==bottomRight){
        for(int i=1;i<n-1;i++){
            if(arr[i][0]==topRight){
                cout << "YES" << endl;
                return;
            }
        }
    }
    if(bottomRight==bottomLeft){
        for(int j=1;j<m-1;j++){
            if(arr[0][j]==bottomRight){
                cout << "YES" << endl;
                return;
            }
        }
    }
    if(bottomLeft==topLeft){
        for(int i=1;i<n-1;i++){
            if(arr[i][m-1]==bottomLeft){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}