#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int sum=0;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    if(n==1){
        cout << sum << endl;
        return;
    }
    int maxDiff;
    int index;
    while(k--){
        maxDiff=0;
        index=-1;
        for(int i=0;i<n-1;i++){
            if(maxDiff<abs(arr[i+1]-arr[i])){
                maxDiff=abs(arr[i+1]-arr[i]);
                index=i;
            }
        }
        if(index==-1) break;
        sum = sum - max(arr[index+1],arr[index]) + min(arr[index+1],arr[index]);
        if(arr[index+1]>arr[index]){
            arr[index+1]=arr[index];
        }else{
            arr[index]=arr[index+1];
        }
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}