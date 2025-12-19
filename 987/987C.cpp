#include<iostream>
#include<vector>
#include<climits>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> s(n);for(int i=0;i<n;i++) cin>>s[i];
    vector<int> c(n);for(int i=0;i<n;i++) cin>>c[i];

    vector<int> next(n,INT_MAX);
    for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++) if(s[i]<s[j]) next[i]=min(next[i],c[i]+c[j]);

    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n-1;j++)
    if(s[i]<s[j])
    ans=min(ans,c[i]+next[j]);

    cout << ((ans==INT_MAX)?-1:ans) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}