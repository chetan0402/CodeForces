#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum=0;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
    cout << sum-n+1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}