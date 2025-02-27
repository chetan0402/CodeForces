#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n,k,p;
    cin >> n >> k >> p;
    k=abs(k);
    auto ans=k/p+((k%p)?1:0);
    cout << ((n<ans)?-1:ans) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}