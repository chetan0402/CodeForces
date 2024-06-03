#include<iostream>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    if(n<m){
        cout << "NO" << endl;
        return;
    }
    n-=m;
    if(n%2){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}