#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int left=arr[0];
    int right=arr[0];
    for(int i=1;i<n;i++){
        left=min(left,arr[i]);
        right=max(right,arr[i]);
    }

    cout << min(abs(s-left),abs(s-right))+(right-left) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}