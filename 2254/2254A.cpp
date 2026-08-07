#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    vector<int> arr(3);
    for(int i=0;i<3;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    cout << min(arr[2]-arr[1],arr[1]-arr[0]) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}