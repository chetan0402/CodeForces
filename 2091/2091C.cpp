#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> ans(n,0);
    for(int i=1;i<=n;i++){
        int indexToSet=(2*i-2)%n;
        if(ans[indexToSet]!=0){
            cout << -1 << endl;
            return;
        }else ans[indexToSet]=i;
    }
    for(auto num:ans) cout << num << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}