#include<iostream>
#include<vector>
#define int long long
using namespace std;

const vector<pair<int,int>> dirs={{-1,0},{0,-1}};

bool dp(vector<string>&grid,int i,int j,int direction,vector<vector<vector<int>>>&memo){
    if(i==-1 || j==-1) return true;
    if(memo[i][j][direction]!=-1) return memo[i][j][direction];
    if(grid[i][j]=='0') return false;
    return memo[i][j][direction]=dp(grid,i+dirs[direction].first,j+dirs[direction].second,direction,memo);
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    vector<vector<vector<int>>> memo(n,vector<vector<int>>(m,vector<int>(2,-1)));
    for(int i=0;i<n;i++) cin >> grid[i];
    for(int i=1;i<n;i++) for(int j=1;j<m;j++) if(grid[i][j]=='1') {
        if(!dp(grid,i,j,0,memo) && !dp(grid,i,j,1,memo)){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}