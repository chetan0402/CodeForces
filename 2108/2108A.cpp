#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    int f_max=0;
    for(int i=0;i<n;i++) f_max+=abs(n-i-(i+1));

    cout << 1+(f_max/2) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}