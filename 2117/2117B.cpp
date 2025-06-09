#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i+=2) cout << i << " ";
    if(n%2) n--;
    for(int i=n;i>=1;i-=2) cout << i << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}