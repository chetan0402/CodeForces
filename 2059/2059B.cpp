#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    if(n==k){
        for(int i=1;i<n;i+=2){
            if(arr[i]!=(i+1)/2){
                cout << (i+1)/2 << endl;
                return;
            }
        }
        cout << k/2+1 << endl;
    }else{
        for(int i=1;i<=n-k+1;i++) if(arr[i]!=1){
            cout << 1 << endl;
            return;
        }
        cout << 2 << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}