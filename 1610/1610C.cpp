#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int rich,poor;cin>>rich>>poor;
        arr[i]={rich,poor};
    }

    auto fn=[&](int k)->bool{
        int cur=0;
        for(int i=0;i<n;i++) if(arr[i].first>=k-cur-1 && arr[i].second>=cur) cur++;
        return cur>=k;
    };

    int ans=1;
    int left=1;
    int right=n;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(fn(mid)){
            ans=mid;
            left=mid+1;
        }else right=mid-1;
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}