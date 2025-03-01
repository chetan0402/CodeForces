#include<iostream>
#include<vector>
#include<cstdint>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int k;cin >> k;
    // n*(n-1)/2<=k
    // n*(n-1) <= 2k
    // (n-1)^2 < 2k
    // n-1 < sqrt(2k)
    // n < sqrt(2k)
    vector<pair<int,int>> ans;
    int x_offset=0;
    int y_offset=0;
    auto s=[&](auto self,int k) -> void {
        if(k==0) return;
        if(k==1){
            ans.push_back({x_offset,y_offset});
            ans.push_back({x_offset+1,y_offset});
            return;
        }
        int n=0;
        while(n*(n-1)/2 <= k) n++;
        n--;
        int left=k-(n*(n-1)/2);
        for(int i=0;i<n;i++) ans.push_back({x_offset+i,y_offset});
        x_offset+=n;
        y_offset++;
        self(self,left);
    };
    s(s,k);
    cout << ans.size() << endl;
    for(auto [x, y]:ans) cout << x << ' ' << y << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}