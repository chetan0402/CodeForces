#include<iostream>
#include<vector>
#include<climits>
#define int long long
#define decrease -1
#define increase -2
#define foundans 1
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> d(n);
    vector<int> c(n);
    for(int i=0;i<n;i++) cin>>c[i]>>d[i];

    auto fn=[&](int rating)->int{
        for(int i=0;i<n;i++){
            if(rating>=1900 && d[i]==2) return decrease;
            if(rating<1900 && d[i]==1) return increase;

            rating+=c[i];
        }
        return foundans;
    };

    int left=INT_MIN;
    int right=INT_MAX;
    int ans=-1;
    bool found=false;
    while(left<=right){
        int mid=left+(right-left)/2;

        int res=fn(mid);
        if(res==foundans){
            found=true;
            ans=mid;
        }
        
        if(res==foundans || res==increase) left=mid+1;
        else right=mid-1;
    }

    if(!found) cout << "Impossible" << endl;
    else if(ans==INT_MAX) cout << "Infinity" << endl;
    else{
        for(int i=0;i<n;i++) ans+=c[i];
        cout << ans << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; // remove before submitting
    while(t--)solve();
}