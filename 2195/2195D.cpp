#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        double ans=0;
        if (i==0) {
            ans+=(-(n-2)/(2.0*(n-1)))*arr[0];
            ans+=0.5*arr[1];
            ans+=(1.0/(2*(n-1.0)))*arr[n-1];
        }else if (i==n-1) {
            ans+=(-(n-2)/(2*(n-1.0)))*arr[n-1];
            ans+=0.5*arr[n - 2];
            ans+=(1.0/(2*(n-1)))*arr[0];
        }else{
            ans+=0.5*arr[i-1];
            ans+=-1.0*arr[i];
            ans+=0.5*arr[i+1];
        }
        cout << (int)round(ans) << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}