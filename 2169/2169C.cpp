#include<iostream>
#include<vector>
#include<climits>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> prefix(n+1);
    prefix[0]=0;

    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]+arr[i-1];

    int diff=0;
    int maxPrev=INT_MIN;

    for(int i=1;i<=n;i++){
        maxPrev=max(maxPrev,-(i*i)+i+prefix[i-1]);
        diff=max(diff,i*i+i-prefix[i]+maxPrev);
    }

    cout << prefix.back()+diff << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}