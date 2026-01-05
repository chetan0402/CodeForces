#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int x,n,m;cin>>x>>n>>m;

    int min=x;
    int max=x;

    for(int i=0;i<m && min>1;i++) min=(min+1)/2;
    for(int i=0;i<n && min;i++) min>>=1;

    for(int i=0;i<n && max;i++) max>>=1;
    for(int i=0;i<m && max>1;i++) max=(max+1)/2;

    cout << min << " " << max << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}