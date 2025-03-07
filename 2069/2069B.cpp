#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

const vector<pair<int,int>> dirs={{0,1},{1,0},{0,-1},{-1,0}};

void solve(){
    int n,m;cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> arr[i][j];
    unordered_map<int,int> cost;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        bool adj=false;
        for(auto [dx,dy]:dirs){
            if(i+dx>=0 && i+dx<n && j+dy>=0 && j+dy<m){
                if(arr[i][j]==arr[i+dx][j+dy]){
                    adj=true;
                    break;
                }
            }
        }
        if(adj) cost[arr[i][j]]=2;
        else if(cost[arr[i][j]]==0) cost[arr[i][j]]++;
    }
    int maxCost=0;
    int totalCost=0;
    for(auto [key,value]:cost){
        maxCost=max(maxCost,value);
        totalCost+=value;
    }
    cout << totalCost-maxCost << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}