#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);for(int i=0;i<n;i++)cin>>arr[i];

    vector<int> prefixV(n+1);
    prefixV[0]=0;
    for(int i=1;i<=n;i++) prefixV[i]=prefixV[i-1]+arr[i-1];

    sort(arr.begin(),arr.end());

    vector<int> prefixU(n+1);
    prefixU[0]=0;
    for(int i=1;i<=n;i++) prefixU[i]=prefixU[i-1]+arr[i-1];

    int q;cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1) cout << (prefixV[r]-prefixV[l-1]) << endl;
        if(type==2) cout << (prefixU[r]-prefixU[l-1]) << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; //comment before submitting
    while(t--)solve();
}