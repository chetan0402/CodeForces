#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n,m,k;cin>>n>>m>>k;
    int deskPerRow=ceil(1.0*k/n);
    int gaps=m-deskPerRow;
    int ans=ceil(1.0*deskPerRow/(gaps+1)); // NEVER OUT CEIL DIRECTLY INTO COUT IT'S DOUBLE DATATYPE
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}