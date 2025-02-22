#include<iostream>
#include<vector>
#include<cstdint>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    vector<int> prefix(n);
    prefix[0]=(arr[0]>0)?arr[0]:0;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1];
        if(arr[i]>0) prefix[i]+=arr[i];
    }
    vector<int> suffix(n);
    suffix[n-1]=(arr[n-1]<0)?(-arr[n-1]):0;
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1];
        if(arr[i]<0) suffix[i]+=(-arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++) ans=max(ans,prefix[i]+suffix[i]);
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}