#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string n;cin>>n;
    int nonZero=0;
    for(auto c:n) if(c!='0') nonZero++;
    int traillingZero=0;
    for(int i=n.size()-1;i>=0;i--) if(n[i]=='0') traillingZero++; else break;
    cout << nonZero-1+traillingZero << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}