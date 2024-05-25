#include<iostream>
#include<string>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    int uCount=0;
    for(int i=0;i<n;i++){
        if(input[i]=='U') uCount++;
    }
    if(uCount%2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}