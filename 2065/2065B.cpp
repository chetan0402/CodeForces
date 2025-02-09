#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string s;cin >> s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cout << 1 << endl;
            return;
        }
    }
    cout << s.size() << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}