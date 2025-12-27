#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<pair<int,int>> arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i].first>>arr[i].second;
        arr[i].first--;
        arr[i].second--;
    }

    vector<vector<int>> adj(n);
    for(auto [u,v]:arr){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> color(n,0);

    auto dfs=[&](auto&self,int node,int setcolor)->bool{
        if(color[node]!=0) return color[node]==setcolor;
        color[node]=setcolor;
        for(auto v:adj[node]) if(!self(self,v,1+2-setcolor)) return false;
        return true;
    };

    if(dfs(dfs,0,1)){
        cout << "YES" << endl;
        for(auto [u,v]:arr) cout << 2-color[u];
    }else{
        cout << "NO" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)solve();
}