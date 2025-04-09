#include<iostream>
#include<vector>
#define int long long
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void solve(){
    int x,k;cin>>x>>k;
    if((k==1 && isPrime(x)) || (x==1 && k==2)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}