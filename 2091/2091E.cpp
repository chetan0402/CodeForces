#include<iostream>
#include<vector>
#define int long long
using namespace std;

const int n=10000000;
vector<bool> isPrime(n+1,true);
void sieve(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=n;i++) if(isPrime[i]) for(int j=i*i;j<=n;j+=i) isPrime[j]=false;
}

void solve(){
    int n;cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++) if(isPrime[i]) ans+=(n/i);
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    sieve();
    while(t--)solve();
}