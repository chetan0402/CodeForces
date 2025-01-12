#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,rows;
    cin >> n >> rows;
    vector<int> arr(n);
    int distinct=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        rows-=arr[i]/2;
        arr[i]=arr[i]%2;
        distinct+=arr[i];
    }
    if()
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}