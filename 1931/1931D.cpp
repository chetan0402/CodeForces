#include<iostream>
#include<vector>
#include<map>
#define int long long
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans=0;
    map<pair<int,int>,int> cnt;
    for(int i=0;i<n;i++){
        ans+=cnt[{(x-(arr[i]%x))%x,arr[i]%y}];
        cnt[{arr[i]%x,arr[i]%y}]++;
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}