#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n=3;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr.begin(),arr.end());
    int times=5;
    while(times--){
        arr[0]++;
        sort(arr.begin(),arr.end());
    }
    cout << arr[0]*arr[1]*arr[2] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}