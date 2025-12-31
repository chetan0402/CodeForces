#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> cnt(150000+2,0);
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        cnt[tmp]++;
    }

    for(int i=150000;i>=1;i--) if(cnt[i]>0) {
        if(cnt[i+1]==0){
            cnt[i+1]++;
            cnt[i]--;
        }
        if(cnt[i]>1 && cnt[i-1]<=1 && i>1){
            cnt[i-1]++;
            cnt[i]--;
        }
    }

    int ans=0;
    for(int i=0;i<cnt.size();i++) if(cnt[i]>0) ans++;

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}