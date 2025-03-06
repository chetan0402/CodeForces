#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    string color;cin>>color;
    vector<int> penality(n);
    int maxPenality=0;
    for(int i=0;i<n;i++){
        cin >> penality[i];
        maxPenality=max(maxPenality,penality[i]);
    }
    
    auto fn=[&](int x)->bool{
        int segments=0;
        bool segment=false;
        for(int i=0;i<n;i++){
            if(penality[i]>x){
                if(color[i]=='R'){
                    if(segment){
                        segments++;
                        segment=false;
                    }
                }else segment=true;
            }
        }
        if(segment) segments++;
        return (segments<=k);
    };

    int l=0;
    int r=maxPenality;
    while(l<r){
        auto mid=l+(r-l)/2;
        if(fn(mid)) r=mid;
        else l=mid+1;
    }
    cout << r << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}