#include<iostream>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    cout << max(n,m)+1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}