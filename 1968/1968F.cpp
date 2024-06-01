#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n,queryCount;
    cin >> n >> queryCount;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    while(queryCount--){
        int start,end;
        cin >> start >> end;
        // NOT SOLVED
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}