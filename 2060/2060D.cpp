#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            cout << "NO" << endl;
            return;
        }else{
            arr[i+1]-=arr[i];
            arr[i]=0;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}