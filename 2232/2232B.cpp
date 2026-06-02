#include<iostream>
#include<vector>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    cout << arr[0] << " ";

    int prev=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        sum+=arr[i];
        prev=min(prev,sum/(i+1));
        cout << prev << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}