#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> brr(n);
    for(int i=0;i<n;i++) cin>>brr[i];

    vector<pair<int,int>> ans;

    for(int i=0;i<n;i++) if(arr[i]>brr[i]){
        swap(arr[i],brr[i]);
        ans.push_back({3,i+1});
    }

    for(int i=0;i<n;i++) for(int j=0;j<n-i-1;j++) if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        ans.push_back({1,j+1});
    }

    for(int i=0;i<n;i++) for(int j=0;j<n-i-1;j++) if(brr[j]>brr[j+1]){
        swap(brr[j],brr[j+1]);
        ans.push_back({2,j+1});
    }

    cout << ans.size() << endl;
    for(auto [type, index]:ans) cout << type << " " << index << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}