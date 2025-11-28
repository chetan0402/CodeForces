#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        int cur=arr[i];
        int leftMax=i-1;
        while(leftMax>=0 && arr[leftMax]<=cur-2) leftMax--;
        int leftMin=i-1;
        while(leftMin>=0 && arr[leftMin]>=cur+2) leftMin--;
        if(leftMax!=-1 && leftMin!=-1){
            ans=min(ans,i-min(leftMax,leftMin)-1);
        }
        int rightMax=i+1;
        while(rightMax<n && arr[rightMax]<=cur-2) rightMax++;
        int rightMin=i+1;
        while(rightMin<n && arr[rightMin]>=cur+2) rightMin++;
        if(rightMax!=n && rightMin!=n){
            ans=min(ans,max(rightMax,rightMin)-i-1);
        }
    }

    cout << (ans==INT_MAX?-1:ans) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}