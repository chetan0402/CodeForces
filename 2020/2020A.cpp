#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    if(k==1){
        cout << n << endl;
        return;
    }
    int step=0;
    while(n!=0){
        step += n%k;
        n/=k;
    }
    cout << step << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}