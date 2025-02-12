#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> sums(n);
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> temp;
            sums[i].first+=temp;
            sums[i].second+=temp*(m-j);
        }
    }
    sort(sums.rbegin(),sums.rend());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=sums[i].first*(n-i-1)*m;
        ans+=sums[i].second;
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}