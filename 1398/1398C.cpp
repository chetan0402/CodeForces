#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string input;cin>>input;
    vector<int> arr(n);
    for(int i=0;i<n;i++) arr[i]=input[i]-'0';

    vector<int> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]+arr[i-1];

    int ans=0;
    unordered_map<int,int> cnt;

    for(int r=0;r<n;r++){
        cnt[r-prefix[r]]++;
        ans+=cnt[r+1-prefix[r+1]];
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}