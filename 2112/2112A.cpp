#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int a,x,y;cin>>a>>x>>y;
    int left=min(x,y);
    int right=max(x,y);
    if(a<left || a>right) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}