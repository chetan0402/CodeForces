#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,x;cin>>n>>x;

    int c=0;
    int temp=x;
    while(temp){
        c+=temp%2;
        temp>>=1;
    }

    if(n<=c){
        cout << x << endl;
        return;
    }

    if(x>1){
        cout << x+n-c+((n-c)%2) << endl;
    }else if(x==1){
        if(n%2) cout << n << endl;
        else cout << n+3 << endl;
    }else{
        if(n==1) cout << -1 << endl;
        else if(n%2) cout << n+3 << endl;
        else cout << n << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}