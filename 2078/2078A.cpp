#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    float n,x;
    cin >> n >> x;
    float sum=0;
    float temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        sum+=temp;
    }
    if(sum/n==x) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}