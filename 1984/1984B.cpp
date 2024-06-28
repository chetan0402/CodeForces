#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    string input;
    cin >> input;
    if(input[input.size()-1]=='9'){
        cout << "NO" << endl;
        return;
    }
    if(input[0]!='1'){
        cout << "NO" << endl;
        return;
    }
    for(int i=1;i<input.size()-1;i++){
        if(input[i]=='0'){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}