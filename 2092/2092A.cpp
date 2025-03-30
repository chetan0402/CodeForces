#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int minElement=arr[0];
    int maxElement=arr[0];
    for(int i=1;i<n;i++){
        minElement=min(arr[i],minElement);
        maxElement=max(arr[i],maxElement);
    }
    cout << maxElement-minElement << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}