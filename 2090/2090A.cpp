#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int x, y,a;
    cin>>x>>y>>a;
    double actual=a%(x+y)+0.5;
    int total=0;
    bool flip=true;

    while(total<=actual){
        if(flip) total+=x;
        else total+=y;
        if (total>actual) {
            cout << (flip ? "NO" : "YES") << endl;
            return;
        }
        flip=!flip;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}