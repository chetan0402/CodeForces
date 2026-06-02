#include<iostream>
#include<vector>
#include<map>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<pair<int,int>> dp(n);
    map<int,int> last;
    dp[0]={1,-1};
    last[arr[0]]=0;
    int ans=1;
    int index=0;
    for(int i=1;i<n;i++){
        if(last.count(arr[i]-1)) dp[i]={dp[last[arr[i]-1]].first+1,last[arr[i]-1]};
        else dp[i]={1,-1};
        last[arr[i]]=i;
        if(dp[i].first>ans){
            ans=dp[i].first;
            index=i;
        }
    }

    cout << ans << '\n';
    vector<int> seq={index+1};
    seq.reserve(ans);
    while(dp[index].second!=-1){
        index=dp[index].second;
        seq.push_back(index+1);
    }
    for(int i=ans-1;i>=0;i--) cout << seq[i] << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}