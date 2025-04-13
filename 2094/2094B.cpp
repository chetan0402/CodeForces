#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m,l,r;cin>>n>>m>>l>>r;
    int toRemove=n-m;
    while(toRemove--){
        if(l<0) l++;
        else if(r>0) r--;
    }
    cout << l << " " << r << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}