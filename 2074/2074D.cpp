#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> x(n);
    vector<int> r(n);
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) cin >> r[i];
    unordered_map<int,int> maxY;
    for(int i=0;i<n;i++){
        for(int curX=x[i]-r[i];curX<=x[i]+r[i];curX++){
            // (x-center_x)^2+(y)^2=r^2
            // y^2=r^2-(x-center_x)^2
            // y=sqrt(r^2-(x-center_x)^2)
            maxY[curX]=max(maxY[curX],(int)sqrt(r[i]*r[i]-(curX-x[i])*(curX-x[i])));
        }
    }
    int ans=0;
    for(auto [_, y]:maxY) ans+=2*y+1;
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}