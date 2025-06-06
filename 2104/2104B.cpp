#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];

    vector<int> prefixMax(n);
    prefixMax[0]=arr[0];
    for(int i=1;i<n;i++) prefixMax[i]=max(prefixMax[i-1],arr[i]);

    vector<int> suffixSum(n+1);
    suffixSum[n]=0;
    for(int i=n-1;i>=0;i--) suffixSum[i]=suffixSum[i+1]+arr[i];

    for(int i=0;i<n;i++) cout << prefixMax[n-1-i]+suffixSum[n-i] << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}