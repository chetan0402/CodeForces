#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    while(n && (n&1)==0) n>>=1;
    int compliment=0;
    int tmp=n;
    while(tmp){
        compliment<<=1;
        compliment|=(tmp&1);
        tmp>>=1;
    }
    int len=0;
    tmp=n;
    while(tmp){
        len++;
        tmp>>=1;
    }
    if((len%2==0 || (n&(1<<(len/2)))==0) && (compliment^n) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}