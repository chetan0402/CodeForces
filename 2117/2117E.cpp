#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n),brr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    for(int i=0;i<n;i++)cin >> brr[i];

    unordered_map<int,int> lastOccuranceArr;
    for(int i=0;i<n;i++) lastOccuranceArr[arr[i]]=i;

    unordered_map<int,int> lastOccuranceBrr;
    for(int i=0;i<n;i++) lastOccuranceBrr[brr[i]]=i;

    for(int i=n-1;i>=0;i--){
        int upNum=arr[i];
        int downNum=brr[i];
        if(upNum==downNum || lastOccuranceArr[upNum]>i || lastOccuranceBrr[upNum]>=i+2 ||
        lastOccuranceArr[downNum]>=i+2 || lastOccuranceBrr[downNum]>i){
            cout << i+1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}