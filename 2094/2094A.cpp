#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string a,b,c;
    cin>>a>>b>>c;
    cout << a[0] << b[0] << c[0] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}