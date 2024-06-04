#include <iostream>
#include<vector>
#include<map>
#define int long long
using namespace std;

void solve(){
    int n,c,d;
    cin >> n >> c >> d;
    int smallest=INT_MAX;
    vector<int> arr(n*n);
    for(int i=0;i<n*n;i++){
        cin >> arr[i];
        smallest=min(smallest,arr[i]);
    }
    map<int,int> mapping;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mapping[smallest+i*c+j*d]++;
        }
    }
    for(int i=0;i<n*n;i++){
        if(mapping[arr[i]]==0){
            cout << "NO" << endl;
            return;
        }
        mapping[arr[i]]--;
    }
    cout << "YES" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}