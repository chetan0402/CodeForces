#include<iostream>
#include<vector>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n,x,s;cin>>n>>x>>s;
    string arr;cin>>arr;

    vector<int> cap(x,0);

    auto sitOccupied=[&]()->bool{
        for(int i=0;i<x;i++) if(cap[i]>0 & cap[i]<s){
            cap[i]++;
            return true;
        }
        return false;
    };

    auto sitFree=[&]()->bool{
        for(int i=0;i<x;i++) if(cap[i]==0){
            cap[i]=1;
            return true;
        }
        return false;
    };

    int aToBePlaced=0;

    for(auto c:arr){
        if(c=='E'){
            
        }
        if(c=='I'){

        }
        if(c=='A'){
            aToBePlaced++;
        }
    }

    int ans=0;
    for(int i=0;i<x;i++) ans+=cap[i];
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}