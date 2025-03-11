#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    if(k%2){
        for(int i=0;i<n-1;i++) cout << n << " ";
        cout << n-1 << endl;
    }else{
        for(int i=0;i<n-2;i++) cout << n-1 << " ";
        cout << n << " " << n-1 << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}