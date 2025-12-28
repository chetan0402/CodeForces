#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string arr;cin>>arr;
    int n=arr.size();
    vector<int> ans;

    for(int i=0;i+2<n;){
        if(i+4<n){
            string tmp=arr.substr(i,5);
            if(tmp=="twone"){
                ans.push_back(i+3);
                i+=5;
                continue;
            }
        }
        string tmp=arr.substr(i,3);
        if(tmp=="two" || tmp=="one"){
            ans.push_back(i+2);
            i+=3;
            continue;
        }
        i++;
    }

    cout << ans.size() << endl;
    for(auto a:ans) cout << a << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}