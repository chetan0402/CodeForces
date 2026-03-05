#include<iostream>
#include<vector>
#include<stack>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    stack<char> st;
    for(auto c:s){
        if(st.size() && st.top()==c) st.pop();
        else st.push(c);
    }
    cout << (st.empty()?"YES":"NO") << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}