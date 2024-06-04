#include <iostream>
using namespace std;

void solve(){
    long long n,k;
    cin >> n >> k;
    if(n==1){
        cout << k << endl;
        return;
    }
    long long temp=1;
    while(temp<k){
        temp=(temp<<1)|1;
    }
    temp=temp>>1;
    k-=temp;
    cout << temp << " " << k << " ";
    n-=2;
    while(n--){
        cout << 0 << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}