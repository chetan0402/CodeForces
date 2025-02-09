#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string us;
    cin >> us;
    us.pop_back();
    us.pop_back();
    us.push_back('i');
    cout << us << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}