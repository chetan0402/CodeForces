#include<iostream>
#include<vector>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2) odd++;
        else even++;
    }
    if(odd==0 || even==0){
        int ans=0;
        for(int i=0;i<n;i++) ans=max(ans,arr[i]);
        cout << ans << endl;
        return;
    }
    int numberOf1=odd-1;
    int numberOf0=even;
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    cout << sum-numberOf1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}