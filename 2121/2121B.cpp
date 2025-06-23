#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    unordered_map<char,int> freq;

    for(auto c:s) freq[c]++;

    for(int i=1;i<n-1;i++) if(freq[s[i]]>1){
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}