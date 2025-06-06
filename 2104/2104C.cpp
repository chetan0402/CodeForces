#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    int aliceCards=0;
    int bobCards=0;

    string arr;cin>>arr;
    for(auto c:arr)
    if(c=='A') aliceCards++;
    else bobCards++;

    if(arr.front()==arr.back()){
        if(arr.front()=='A') cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }else{
        if(arr.front()=='A'){
            if(bobCards==1) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else{
            if(aliceCards==1) cout << "Bob" << endl;
            else if(arr[n-2]=='B') cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}