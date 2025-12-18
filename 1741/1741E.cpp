#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<bool> dp(n,false);

    if(arr[0]<n) dp[arr[0]]=true;

    for(int i=0;i<n;i++){
        int leftstart=i-arr[i];
        if(leftstart==0 || (leftstart>0 && dp[leftstart-1])) dp[i]=true;
        if(dp[i] && i+1<n && i+1+arr[i+1]<n) dp[i+1+arr[i+1]]=true;
    }

    cout << (dp.back()?"YES":"NO") << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}