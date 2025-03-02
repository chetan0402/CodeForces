#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

const int M = 998244353;

int mod_mul(int a, int b) {
    a%=M;
    b%=M;
    return (a*b)%M;
}
int mod_exp(int base, int exp) {
    int result = 1;
    base %= M;
    while (exp > 0) {
        if (exp & 1) {
            result = mod_mul(result, base);
        }
        base = mod_mul(base, base);
        exp >>= 1;
    }
    return result;
}
int mod_sub(int a, int b) {
    return ((a % M) - (b % M) + M) % M;
}
int mod_add(int a, int b) {
    return ((a % M) + (b % M)) % M;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> prefix(n);
    prefix[0] = 0;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + (arr[i-1] == 2);
    }
    int ans = 0;
    int prefixpj = 0;
    int three = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 3) {
            prefixpj = mod_add(prefixpj, mod_exp(2, prefix[i]));
            three++;
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1 && three) {
            int inv = mod_exp(mod_exp(2, prefix[i]), M-2);
            int term1 = mod_mul(prefixpj, inv);
            int term2 = mod_sub(term1, three);
            ans = mod_add(ans, term2);
        }
        else if(arr[i] == 3) {
            three--;
            prefixpj = mod_sub(prefixpj, mod_exp(2, prefix[i]));
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}