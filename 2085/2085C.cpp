#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    // goal: (x+k)&(y+k)=0
    // make the maximum into 2^n
    int maxValue=max(x,y);
    int msb=log2(maxValue);
    int k=(1<<(msb+1))-maxValue;
    cout << (((x+k)&(y+k))?-1:k) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}