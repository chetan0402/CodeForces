#include<iostream>
#include<vector>
#include<cmath>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

const int MOD=1e9+7;

void solve(){
    int r,g;cin>>r>>g;
    int maxH=ceil((sqrt(8*(r+g)+1)-1)/2);
    vector<int> dp(r+1,0),prevdp(r+1,0);
    prevdp[0]=1;
    int ans=1;
    for(int h=1;h<=maxH;h++){
        for(int i=0;i<=r;i++){
            if(i+h<=r) dp[i+h]=(dp[i+h]+prevdp[i])%MOD;
            if((h*(h+1)/2)-i<=g) dp[i]=(dp[i]+prevdp[i])%MOD;
        }
        int cur=0;
        for(int i=0;i<=r;i++) cur=(cur+dp[i])%MOD;
        if(cur) ans=cur;
        prevdp=dp;
        dp.assign(r+1,0);
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; //remove before submitting
    while(t--)solve();
}