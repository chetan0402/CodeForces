#include<iostream>
#include<vector>
#define int long long
#define maxnum 100000
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> cnt(maxnum+1,0);
    int dp[maxnum+1];
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        cnt[temp]++;
    }
    dp[0]=0;
    dp[1]=cnt[1];
    for(int i=2;i<=maxnum;i++){
        dp[i]=max(dp[i-1],cnt[i]*i+dp[i-2]);
    }
    cout << dp[maxnum] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    while(t--)solve();
}