#include<iostream>
#include<vector>
#define int long long
using namespace std;

const int MOD=32768;

void solve(){
    int n;cin>>n;
    int ans=15;
    for(int add=0;add<=15;add++) for(int mul=0;mul+add<=15;mul++) if(((n+add)*(1<<mul))%MOD==0) ans=min(ans,add+mul);
    cout << ans << " ";
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}