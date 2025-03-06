#include<iostream>
#include<vector>
#define int long long
using namespace std;

void dfs(vector<vector<int>>&adj,vector<bool>&visited,int i){
    visited[i]=true;
    for(auto v:adj[i]){
        if(visited[v]) continue;
        dfs(adj,visited,v);
    }
    cout << i+1 << " ";
}

void solve(){
    int n,st,en;cin>>n>>st>>en;st--;en--;
    vector<vector<int>> adj(n,vector<int>());
    for(int i=1;i<n;i++){
        int u,v;cin>>u>>v;u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n,false);
    dfs(adj,visited,en);
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}