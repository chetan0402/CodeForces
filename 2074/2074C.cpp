#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    int limit=log2(n);
    for(int i=0;i<=limit;i++){
        int y=(1<<i)-1;
        int z=n^y;
        int maxValue=max({n,y,z});
        if(n+y+z>2*maxValue){
            cout << y << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}