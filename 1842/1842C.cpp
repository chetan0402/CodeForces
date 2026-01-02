#include<iostream>
#include<vector>
#include<climits>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> dp(n);
    dp[0]=1;

    vector<int> minDp(n+1,INT_MAX);
    minDp[arr[0]]=0;

    for(int i=1;i<n;i++){
        int num=arr[i];
        dp[i]=min(dp[i-1]+1,minDp[num]);
        minDp[num]=min(minDp[num],dp[i-1]);
    }

    cout << n-dp[n-1] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}