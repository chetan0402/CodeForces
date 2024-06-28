#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    if(arr[n-1]-arr[1]>0){
        cout << "YES" << endl << "B";
        for(int i=1;i<n;i++) cout << "R";
        cout << endl;
        return;
    }
    if(arr[n-1]-arr[0]>0){
        cout << "YES" << endl << "RB";
        for(int i=2;i<n;i++) cout << "R";
        cout << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}