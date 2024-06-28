#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int smallestSum=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        smallestSum=min(smallestSum,sum);
    }
    cout << sum - 2*smallestSum << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}