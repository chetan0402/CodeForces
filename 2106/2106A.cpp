#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ones=0;
    for(auto c:s) if(c=='1') ones++;
    int zeros=n-ones;
    cout << ones*(ones-1) + zeros*(ones+1) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}