#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> ans(n,-1);

    auto dfs=[&](auto&self,int n,int k)->void{
        if(n==0) return;
        
        if(k>=n){
            ans[n-1]=1000;
            self(self,n-1,k-n);
            return;
        }
        if(k>0) ans[k-1]=200;
        ans[k]=-400;
    };

    dfs(dfs,n,k);
    for(auto n:ans) cout << n << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}