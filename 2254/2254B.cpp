#include<iostream>
#include<vector>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n;cin>>n;
    string arr;cin>>arr;
    int ignore=-1;
    for(int i=1;i<=n-2;i++) if(arr[i-1]==arr[i+1] && arr[i-1]!=arr[i]){
        ignore=i;
        break;
    }

    if(ignore==-1){
        for(int i=1;i<=n-2;i++) if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            ignore=i;
            break;
        }
    }

    if(ignore==-1) ignore=1;

    int prev=arr[0];
    int ans=1;
    for(int i=1;i<n;i++){
        if(i==ignore) continue;
        if(arr[i]==prev) continue;
        prev=arr[i];
        ans++;
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}