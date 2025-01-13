#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr.begin(),arr.end());
    vector<int> distinct = {1};
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) distinct.back()++;
        else distinct.push_back(1);
    }
    sort(distinct.begin(),distinct.end());
    int m=distinct.size();
    for(int i=0;i<m-1;i++){
        if(distinct[i]>k){
            cout << m-i << endl;
            return;
        }
        k-=distinct[i];
    }
    cout << 1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}