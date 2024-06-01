#include<iostream>
#include<string>
using namespace std;

void solve(){
    string input;
    cin >> input;
    int n=input.length();
    for(int i=0;i<n-1;i++){
        if(input[i]!=input[i+1]){
            cout << "YES" << endl;
            cout << input.substr(0,i) << input[i+1] << input[i] << input.substr(i+2,n-i-2) << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}