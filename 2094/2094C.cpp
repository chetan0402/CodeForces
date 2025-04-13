#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    vector<bool> found(2*n+1,false);
    found[0]=true;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>arr[i][j];
        found[arr[i][j]]=true;
    }
    int notFound;
    for(int i=0;i<=2*n;i++) if(!found[i]) notFound=i;
    vector<int> ans(2*n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) ans[i+j+2-1]=arr[i][j];
    ans[0]=notFound;
    for(auto num:ans) cout << num << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}