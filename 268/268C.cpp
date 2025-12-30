#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    cout << min(n,m)+1 << endl;
    for(int k=0;k<=min(n,m);k++) cout << n-k << " " << k << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; //remove before submtting
    while(t--)solve();
}