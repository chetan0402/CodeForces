#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,x;cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int first=-1;
    int last=n;
    for(int i=0;i<n;i++) if(arr[i]){
        if(first==-1) first=i;
        last=i;
    }
    if(first==-1 || x>=last-first+1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}