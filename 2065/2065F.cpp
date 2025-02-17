#include<iostream>
#include<vector>
#include<cstdint>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n;cin >> n;
    vector<int> arr(n+1);for(int i=1;i<=n;i++) cin >> arr[i];
    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> exists(n+1,false);
    for(int i=1;i<=n;i++){
        for(auto v:adj[i]){
            if(arr[v]==arr[i]) exists[arr[i]]=true;
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>> pq;
    for(int i=1;i<=n;i++) for(auto v:adj[i]){
        pq.push({arr[i],v});
    }
    auto prev=pq.top();
    pq.pop();
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();
        if(prev.first==cur.first && prev.second==cur.second) exists[cur.first]=true;
        prev=cur;
    }
    for(int i=1;i<=n;i++){
        if(exists[i]) cout << '1';
        else cout << '0';
    }
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}