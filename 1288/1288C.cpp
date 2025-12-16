#include<iostream>
#include<vector>
#define int long long
using namespace std;

const int MOD=1e9+7;

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> dp(n+1,vector<int>(2*m+1,0));

    for(int i=0;i<=n;i++) dp[i][1]=i;

    for(int i=1;i<=n;i++){
        for(int j=2;j<=2*m;j++){
            for(int k=1;k<=i;k++) dp[i][j]=(dp[i][j]+dp[k][j-1])%MOD;
        }
    }

    cout << dp[n][2*m] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}