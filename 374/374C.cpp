#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

unordered_map<char,char> nextLetter={{'D','I'},{'I','M'},{'M','A'},{'A','D'}};
const vector<pair<int,int>> dirs={{-1,0},{0,-1},{1,0},{0,1}};

int dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>&arr,vector<vector<int>>&memo){
    if(memo[i][j]!=-1) return memo[i][j];
    if(vis[i][j]){
        cout << "Poor Inna!" << endl;
        exit(0);
    }
    vis[i][j]=true;
    char targetLetter=nextLetter[arr[i][j]];
    int ans=0;
    for(auto [dx,dy]:dirs){
        int nx=i+dx,ny=j+dy;
        if(nx>=0 && nx<arr.size() && ny>=0 && ny<arr[0].size() && arr[nx][ny]==targetLetter){
            ans=max(ans,dfs(nx,ny,vis,arr,memo));
        }
    }
    return memo[i][j]=1+ans;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m,' '));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
    vector<vector<int>> memo(n,vector<int>(m,-1));
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) if(arr[i][j]=='D'){
            vector<vector<bool>> vis(n,vector<bool>(m,false));
            ans=max(ans,dfs(i,j,vis,arr,memo));
        }
    }
    if(ans/4==0) cout << "Poor Dima!" << endl;
    else cout << ans/4 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    while(t--)solve();
}