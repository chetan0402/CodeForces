#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int diff=b-a;
    if(c-b<diff){
        cout << "NO" << endl;
        return;
    }
    c-=diff;
    a+=diff;
    int dis=(c-b)/3;
    a+=dis;
    b+=dis;
    c-=dis*2;
    if(a==c) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}