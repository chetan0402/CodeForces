#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n,q;cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    while(q--){
        int x;cin>>x;
        int i=n-1;
        for(;i>=0;i--){
            if(arr[i]>x) break;
            x^=arr[i];
        }
        cout << n-1-i << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}

// TLE