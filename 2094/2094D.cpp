#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string p,s;cin>>p>>s; // can s be formed from p
    int ptrP=0;
    int ptrS=0;
    while(ptrP<p.size() && ptrS<s.size()){
        if(p[ptrP]!=s[ptrS]){
            cout << "NO" << endl;
            return;
        }
        auto characterToLook=p[ptrP];
        int pCount=0;
        int sCount=0;
        while(ptrP<p.size() && p[ptrP]==characterToLook){
            pCount++;
            ptrP++;
        }
        while(ptrS<s.size() && s[ptrS]==characterToLook){
            sCount++;
            ptrS++;
        }
        if(sCount>pCount*2 || sCount<pCount){
            cout << "NO" << endl;
            return;
        }
    }
    if(ptrP<p.size() || ptrS<s.size()) cout << "NO" << endl;
    else cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}