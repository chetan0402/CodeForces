#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    if(abs(n-m)>k || max(n,m)<k){
        cout << -1 << endl;
        return;
    }
    auto more=((n>m)?'0':'1');
    auto less=(more=='0')?'1':'0';
    auto large=max(n,m);
    auto small=min(n,m);
    for(int i=0;i<k;i++) cout << more;
    large-=k;
    bool flip=false;
    while(large>0 && small>0){
        if(flip){
            cout << more;
            large--;
        }else{
           cout << less;
            small--;
        }
        flip=!flip;
    }
    while(large--) cout << more;
    while(small--) cout << less;
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}