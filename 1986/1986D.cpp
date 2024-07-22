#include<iostream>
#include<vector>
#include<string>
#define int long long
using namespace std;

void solve(){
    int n;
    string input;
    cin >> n;
    cin >> input;
    if(n==2){
        cout << stoi(input) << endl;
        return;
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}