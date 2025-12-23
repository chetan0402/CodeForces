#include<iostream>
#include<vector>
#include<unordered_set>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_set<int> exist(arr.begin(),arr.end());

    int mex=0;
    int cur=0;

    vector<int> ans(n);
    unordered_set<int> answered;

    for(int i=0;i<n;i++){
        if(arr[i]>mex && !answered.count(mex)){
            ans[i]=mex;
            answered.insert(mex);
            while(answered.count(mex)) mex++;
            if(mex!=arr[i]){
                cout << -1 << endl;
                return;
            }
        }else{
            while(exist.count(cur) || answered.count(cur)) cur++;
            ans[i]=cur++;
            answered.insert(ans[i]);
        }
    }

    for(auto num:ans) cout << num << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}