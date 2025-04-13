#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    vector<int> bits(30,0);
    for(int i=0;i<30;i++){
        for(auto num:arr){
            bits[i]+=(bool)(num&(1<<i));
        }
    }
    int maxAns=0;
    int base=0;
    for(auto num:arr) base+=num;
    for(auto num:arr){
        int toRemove=0;
        int toAdd=0;
        for(int i=0;i<30;i++) if(num&(1<<i)){
            toRemove+=bits[i]*(1<<i);
            toAdd+=(n-bits[i])*(1<<i);
        }
        maxAns=max(maxAns,base-toRemove+toAdd);
    }
    cout << maxAns << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}