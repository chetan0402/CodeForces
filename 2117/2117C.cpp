#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    
    unordered_map<int,int> maxPos;
    vector<int> nextOccurance(n+1,n);

    for(int i=n-1;i>=0;i--){
        if(maxPos.count(arr[i])) nextOccurance[i]=maxPos[arr[i]];
        maxPos[arr[i]]=i;
    }

    int segments=0;
    int curEnd=0;
    int nextEnd=nextOccurance[0];
    for(int i=0;i<=n;i++){
        if(nextOccurance[i]==n){
            segments++;
            break;
        }else if(i==curEnd){
            segments++;
            nextEnd=max(nextEnd,nextOccurance[i]);
            curEnd=nextEnd;
        }else{
            nextEnd=max(nextEnd,nextOccurance[i]);
        }
    }
    
    cout << segments << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}