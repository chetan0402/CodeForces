#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<vector<int>> memo(n,vector<int>(n,-1));

    auto dfs=[&](auto&self,int i,int j)->int{
        if(i>j) return 1e9;
        if(i==j) return 1;
        if(j-i==1) return 1+(arr[i]!=arr[j]);
        if(memo[i][j]!=-1) return memo[i][j];

        memo[i][j]=2*(arr[i]!=arr[j])+self(self,i+1,j-1);
        for(int k=i;k<j;k++) memo[i][j]=min(memo[i][j],self(self,i,k)+self(self,k+1,j));
        return memo[i][j];
    };

    cout << dfs(dfs,0,n-1) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}