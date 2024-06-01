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
    for(int i=0;i<n;i++){
        if(arr[arr[i]-1]-1==i){
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}