#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int len=0;
    while(n/(1<<len)) len++;
    cout << len << endl;
    while(n>0){
        cout << n%2 << " ";
        n/=2;
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}