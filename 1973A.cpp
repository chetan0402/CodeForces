#include<iostream>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b+c)%2){
        cout << -1 << endl;
        return;
    }
    int draw=0;
    while((a+b != 0 || b+c !=0 || a+c !=0) && a!=0){
        if(c>b){
            c--;
        }else{
            b--;
        }
        a--;
        draw++;
    }
    draw+=b;
    cout << draw << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}