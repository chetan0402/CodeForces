#include <iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,mypos;
    cin >> n >> mypos;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int myVal=arr[mypos-1];
    int lostIndex=0;
    for(int i=0;i<n;i++){
        if(arr[i]>myVal){
            lostIndex=i;
            break;
        }
    }
    swap(arr[lostIndex],arr[mypos-1]);
    int winCount=0;
    if(lostIndex<mypos-1){
        if(lostIndex>0) winCount++;
        for(int i=lostIndex+1;i<n;i++){
            if(arr[i]<arr[lostIndex]){
                winCount++;
            }else break;
        }
    }
    winCount=max(lostIndex-1,winCount);
    cout << winCount << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}