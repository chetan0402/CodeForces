#include<iostream>
#include<vector>
#define int long long
using namespace std;

const int MOD=1e9+7;

int power(int base,int expo){
    int res=1;
    while(expo){
        if(expo%2) res=(res*base)%MOD;
        base=(base*base)%MOD;
        expo>>=1;
    }
    return res;
}

void solve(){
    int n;cin>>n;
    int fac=1;
    for(int i=2;i<=n;i++) fac=fac*i%MOD;
    cout << (fac-power(2,n-1)+MOD)%MOD << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}