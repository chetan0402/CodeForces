#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int increaseBreak=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) increaseBreak++;
    }
    if(arr[n-1]>arr[0]) increaseBreak++;
    if(n==1) increaseBreak++;
    if(increaseBreak==1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}