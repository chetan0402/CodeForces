#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m,h;cin>>n>>m>>h;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> diff(n,0);
    vector<int> set(n,m);
    int reset=m;
    while(m--){
        int b,c;cin>>b>>c;
        b--;
        if(set[b]>=reset) diff[b]=c;
        else diff[b]+=c;
        set[b]=m;
        if(arr[b]+diff[b]>h) reset=m;
    }
    for(int i=0;i<n;i++){
        if(set[i]>=reset) cout << arr[i] << " ";
        else cout << arr[i]+diff[i] << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}