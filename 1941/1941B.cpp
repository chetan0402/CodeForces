#include<iostream>
#include<vector>
#define int long long
using namespace std;

int canDo(vector<int>&arr,int start,int end){
    if(end-start==1){
        if(arr[start]==0 && arr[end]==0) return 1;
        else return 0;
    }
    if(start==end){
        if(arr[start]==0) return 1;
        else return 0;
    }
    arr[start+1]-=2*arr[start];
    arr[start+2]-=arr[start];
    arr[start]=0;
    arr[end-1]-=2*arr[end];
    arr[end-2]-=arr[end];
    arr[end]=0;
    if(arr[start+1]<0 || arr[start+2]<0 || arr[end-1]<0 || arr[end-2]<0) return 0;
    else return canDo(arr,start+1,end-1);
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    cout << ((canDo(arr,0,n-1)) ? "YES" : "NO") << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}