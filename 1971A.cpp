#include<iostream>
using namespace std;

void solve(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << min(num1,num2) << " " << max(num1,num2) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}