#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
#define int long long
using namespace std;

void solve(){
    int n,s1,s2;
    cin >> n >> s1 >> s2;s1--;s2--;
    int m1;
    cin >> m1;
    vector<vector<int>> adj1(n);
    vector<vector<int>> adj2(n);
    int u,v;
    for(int i=0;i<m1;i++){
        cin >> u >> v;
        u--;v--;
        adj1[u].push_back(v);
        adj1[v].push_back(u);
    }
    int m2;
    cin >> m2;
    for(int i=0;i<m2;i++){
        cin >> u >> v;
        u--;v--;
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
    pq.push({0,s1,s2});
    vector<vector<int>> dist(n,vector<int>(n,INT_MAX));
    dist[s1][s2]=0;
    int ans=INT_MAX;
    while(!pq.empty()){
        auto cur=pq.top();
        auto curDist=cur[0];
        auto u1=cur[1];
        auto u2=cur[2];
        pq.pop();
        if(curDist>dist[u1][u2]) continue;
        for(auto v1:adj1[u1]){
            for(auto v2:adj2[u2]){
                if(dist[v1][v2]>dist[u1][u2]+abs(v1-v2)){
                    dist[v1][v2]=dist[u1][u2]+abs(v1-v2);
                    pq.push({dist[v1][v2],v1,v2});
                }
                if(v1==v2 && u1==u2) ans=min(ans,dist[v1][v2]);
            }
        }
    }
    cout << (ans==INT_MAX?-1:ans) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}