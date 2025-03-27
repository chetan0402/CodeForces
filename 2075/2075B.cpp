#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    if(k==1){
        int option1=*max_element(arr.begin(),arr.end()-1)+arr.back();
        int option2=arr[0]+*max_element(arr.begin()+1,arr.end());
        cout << max(option1,option2) << endl;
    }else{
        sort(arr.begin(),arr.end());
        int ans=0;
        int i=n-1;
        k++;
        while(k--) ans+=arr[i--];
        cout << ans << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}