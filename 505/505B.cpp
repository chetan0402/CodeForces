#include<iostream>
#include<vector>
#include<unordered_set>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,e;cin>>n>>e;
    vector<vector<pair<int,int>>> adj(n); // v,color
    for(int i=0;i<e;i++){
        int u,v,color;cin>>u>>v>>color;
        u--;v--;
        adj[u].push_back({v,color});
        adj[v].push_back({u,color});
    }
    int q;cin>>q;
    unordered_set<int> colors_found;
    vector<bool> vis;
    while(q--){
        int start,end;cin>>start>>end;
        start--;end--;
        auto dfs=[&](auto&&self,int i,int color)->bool{
            vis[i]=true;
            if(i==end) return true;
            for(auto [v,v_color]:adj[i]){
                if(vis[v] || color!=v_color) continue;
                if(self(self,v,color)) return true;
            }
            return false;
        };
        colors_found.clear();
        for(auto [v,color]:adj[start]){
            if(colors_found.find(color)!=colors_found.end()) continue;
            vis.assign(n,false);
            vis[start]=true;
            if(dfs(dfs,v,color)) colors_found.insert(color);
        }
        cout << colors_found.size() << endl;
    }
    return 0;
}