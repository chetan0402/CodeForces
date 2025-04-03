#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr.begin(),arr.end());
    int ans=0;
    int teamLen=0;
    for(int i=n-1;i>=0;i--){
        teamLen++;
        if(ceil(1.0*x/arr[i])<=teamLen){
            ans++;
            teamLen=0;
        }
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}