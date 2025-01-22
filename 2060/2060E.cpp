#include<iostream>
#include<vector>
#define int long long
using namespace std;

class DSU{
    vector<int> parent;
    vector<int> size;

    public:
    DSU(int n){
        parent=vector<int>(n,-1);
        size=vector<int>(n,0);
    }

    void make(int v){
        parent[v]=v;
        size[v]=1;
    }

    int find(int v){
        if(parent[v]==v) return v;
        return parent[v]=find(parent[v]);
    }

    void Union(int u,int v){
        int a=find(u);
        int b=find(v);
        if(a!=b){
            if(size[a]<size[b]) swap(a,b);
            parent[b]=a;
            size[a]+=size[b];
        }
    }

    int componenets(){
        int ans=0;
        for(int i=0;i<parent.size();i++) if(find(i)==i) ans++;
        return ans;
    }
};

void solve(){
    int n,m1,m2;
    cin >> n >> m1 >> m2;
    vector<vector<int>> f_edges(m1,vector<int>(2,0));
    vector<vector<int>> g_edges(m2,vector<int>(2,0));
    for(int i=0;i<m1;i++){
        cin >> f_edges[i][0] >> f_edges[i][1];
        f_edges[i][0]--;
        f_edges[i][1]--;
    }
    for(int i=0;i<m2;i++){
        cin >> g_edges[i][0] >> g_edges[i][1];
        g_edges[i][0]--;
        g_edges[i][1]--;
    }
    DSU g_dsu(n);
    for(int i=0;i<n;i++) g_dsu.make(i);
    for(auto&edge:g_edges){
        g_dsu.Union(edge[0],edge[1]);
    }
    int ans=0;
    DSU f_dsu(n);
    for(int i=0;i<n;i++) f_dsu.make(i);
    for(auto&edge:f_edges){
        if(g_dsu.find(edge[0])!=g_dsu.find(edge[1])) ans++;
        else{
            f_dsu.Union(edge[0],edge[1]);
        }
    }
    cout << ans+f_dsu.componenets()-g_dsu.componenets() << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}