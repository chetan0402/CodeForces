#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n%2) n-=k;
    else n-=(k-1);
    if(n%2==0) k--;
    cout << 1+n/k+(n%k>0) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}