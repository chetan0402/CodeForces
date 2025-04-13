#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m,k;cin>>n>>m>>k;
    int cur=0;
    vector<vector<int>> ans(n,vector<int>(m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        if(i!=0 && ans[i-1][j]==cur+1) cur++;
        cur%=k;
        ans[i][j]=cur+1;
        cur++;
        cur%=k;
    }
    for(auto row:ans){
        for(auto num:row) cout << num << " ";
        cout << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}