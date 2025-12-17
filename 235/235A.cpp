#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    if(n==1) cout << 1 << endl;
    else if(n==2) cout << 2 << endl;
    else if(n%2) cout << n*(n-1)*(n-2) << endl;
    else if(n%3) cout << n*(n-1)*(n-3) << endl;
    else cout << (n-1)*(n-2)*(n-3) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}