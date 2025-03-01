#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

bool sumPerfectSquare(int n){
    auto sum=n*(n+1)/2;
    int sq=sqrt(sum);
    return (sq*sq)==sum;
}

void solve(){
    int n;cin >> n;
    if(sumPerfectSquare(n)){
        cout << -1 << endl;
        return;
    }
    vector<int>ans(n+1);
    for(int i=1;i<=n;i++) ans[i]=i;
    for(int i=1;i<n;i++) if(sumPerfectSquare(i)) swap(ans[i],ans[i+1]);
    for(int i=1;i<=n;i++) cout << ans[i] << ' ';
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}