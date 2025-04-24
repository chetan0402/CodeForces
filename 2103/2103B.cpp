#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int number_of_switchs=0;
    if(s[0]=='1') number_of_switchs++;
    for(int i=0;i<n-1;i++) if(s[i]!=s[i+1]) number_of_switchs++;
    bool zero=false;
    for(int i=0;i<n;i++) if(s[i]=='1'){
        // find 01, that will decrease by -2
        if(s[i+1]=='0') zero=true;
        for(int j=i+1;j<n-1;j++){
            if(s[j]=='0' && s[j+1]=='1'){
                cout << s.size()+number_of_switchs-2 << endl;
                return;
            }
            if(s[j+1]=='0') zero=true;
        }
        if(zero){
            cout << s.size()+number_of_switchs-1 << endl;
            return;
        }
        break;
    }
    cout << s.size()+number_of_switchs << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}