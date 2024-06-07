#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)cin >> arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i]<10){
                cout << "NO" << endl;
                return;
            }
            int first=arr[i]%10;
            int tenth=arr[i]/10;
            arr.erase(arr.begin()+i);
            arr.insert(arr.begin()+i,tenth);
            arr.insert(arr.begin()+i+1,first);
            n++;
            i-=2;
            if(i<0) i=-1;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}