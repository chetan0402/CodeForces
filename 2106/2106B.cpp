#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,x;cin>>n>>x;
    vector<int> ans;
    ans.reserve(n);
    for(int i=0;i<n;i++) if(i!=x) ans.push_back(i);
    if(ans.size()<n) ans.push_back(x);
    for(auto num:ans) cout << num << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}