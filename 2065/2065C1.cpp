#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m; // m is always 1
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int k;cin >> k;
    for(int i=0;i<n;i++){
        auto minimum=min(k-arr[i],arr[i]);
        auto maximum=max(k-arr[i],arr[i]);
        if(i==0 || (i>0 && arr[i-1]<=minimum)) arr[i]=minimum;
        else arr[i]=maximum;

        if(i>0 && arr[i-1]>arr[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}