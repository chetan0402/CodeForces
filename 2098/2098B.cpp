#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int startHouse=arr[(n-1-k)/2];
    int endHouse=arr[k+(n-k)/2];
    cout << endHouse-startHouse+1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}