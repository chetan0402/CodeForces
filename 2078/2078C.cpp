#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++) cin >> arr[i];
    int a0=0;
    for(int i=0;i+1<2*n;i+=2){
        int large=max(arr[i],arr[i+1]);
        int small=min(arr[i],arr[i+1]);
        if(small-large+a0>0){
            a0+=small-large;
            arr[i]=small;
            arr[i+1]=large;
        }
        else{
            a0+=large-small;
            arr[i]=large;
            arr[i+1]=small;
        }
    }
    cout << a0 << " ";
    for(auto num:arr) cout << num << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}