#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int l,r,d,u;
    cin>>l>>r>>d>>u;
    if(l==r && r==d && d==u) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}