#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<unordered_set<int>> edges(n);
    int u,v;
    for(int i=0;i<n-1;i++){
        cin >> u >> v;
        u--; v--;
        edges[u].insert(v);
        edges[v].insert(u);
    }
    vector<pair<int,int>> deg_to_i(edges.size());
    for(int i=0;i<edges.size();i++) deg_to_i[i]={edges[i].size(),i};
    sort(deg_to_i.rbegin(), deg_to_i.rend());
    int ans=0;
    for(int i=0;i<deg_to_i.size();i++){
        auto current_i=deg_to_i[i];
        if(i>0) if(deg_to_i[0].first-1>=current_i.first) break;
        for(int j=i+1;j<deg_to_i.size();j++){
            auto current_j=deg_to_i[j];
            if(edges[current_i.second].count(current_j.second)==0){
                ans=max(ans,current_i.first+current_j.first-1);
                break;
            }else{
                ans=max(ans,current_i.first+current_j.first-2);
            }
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}