#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> arr[i][j];
    vector<int> mexPower(n,0);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(arr[i][j]==1) mexPower[i]++;
            else break;
        }
    }
    sort(mexPower.begin(),mexPower.end());
    int mex=n;
    int ptr=0;
    for(int num=0;num<=n;num++){
        bool found=false;
        while(ptr<n && mexPower[ptr]<=num){
            ptr++;
            found=true;
        }
        if(!found && ptr<n && mexPower[ptr]>num){
            ptr++;
            found=true;
        }
        if(!found){
            mex=num;
            break;
        }
    }
    cout << mex << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}