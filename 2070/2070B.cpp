#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,x,k;cin>>n>>x>>k;
    string inst;cin>>inst;
    for(auto c:inst){
        if(c=='L') x--;
        else x++;
        k--;
        if(x==0) break;
    }
    if(x!=0){
        cout << 0 << endl;
        return;
    }
    int loopLen=0;
    bool loopFound=false;
    for(auto c:inst){
        if(c=='L') x--;
        else x++;
        loopLen++;
        if(x==0){
            loopFound=true;
            break;
        }
    }
    if(loopFound) cout << 1+k/loopLen << endl;
    else cout << 1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}