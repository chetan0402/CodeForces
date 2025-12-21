#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<tuple<int,int,int>> ops(m);
    for(int i=0;i<m;i++){
        int l,r,d;cin>>l>>r>>d;
        ops[i]={l-1,r-1,d};
    }

    vector<int> opsMul(m);

    while(k--){
        int x,y;cin>>x>>y;
        opsMul[x-1]++;
        if(y!=m) opsMul[y]--;
    }

    vector<int> applied(n,0);
    int cur=0;
    for(int i=0;i<m;i++){
        cur+=opsMul[i];
        auto [l,r,d]=ops[i];
        applied[l]+=cur*d;
        if(r+1!=n) applied[r+1]-=cur*d;
    }

    int offset=0;
    for(int i=0;i<n;i++){
        offset+=applied[i];
        cout << a[i]+offset << " ";
    }
    //cout << endl; // remove before submitting
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}