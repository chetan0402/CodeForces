#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=n-2;i++){
        cout << i << " " << i << endl;
    }
    cout << n-1 << " " << n << endl;
    cout << n << " "  << n << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--)solve();
}