#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    bool sorted=true;
    for(int i=0;i+1<n;i++) if(arr[i]>arr[i+1]){
        sorted=false;
        break;
    }

    if(sorted) cout << n << endl;
    else cout << 1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}