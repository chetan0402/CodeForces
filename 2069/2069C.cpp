#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

int M=998244353;

int mod_exp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve(){
    int n;
    cin >> n;
    int Ttwos=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==2) Ttwos++;
    }
    vector<int> prefix(n);
    prefix[0]=0;
    for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+(arr[i-1]==2);
    vector<int> suffix(n);
    suffix[n-1]=0;
    for(int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]+(arr[i+1]==2);
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=1) continue;
        for(int j=i+2;j<n;j++){
            if(arr[j]!=3) continue;
            auto two=Ttwos-prefix[i]-suffix[j];
            ans += mod_exp(2, two, M) - 1;
            ans %= M;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}

// TLE