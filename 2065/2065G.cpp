#include<iostream>
#include<vector>
#include<cstdint>
#include<unordered_set>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<bool> exists(n+1,false);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        exists[temp]=true;
    }
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i) prime[j]=false;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!exists[i]) continue;
        auto sq=(int32_t) sqrt(i);
        if(sq*sq==i && prime[sq]) ans++;
        else if(prime[i] && i*i<=n && exists[i*i]) ans++;
    }
    int primes=0;
    for(int i=2;i<=n;i++) if(prime[i] && exists[i]) primes++;
    ans+=(primes)*(primes-1)/2;
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}