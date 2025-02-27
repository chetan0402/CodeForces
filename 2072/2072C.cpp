#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    int out=0;
    int current_or=0;
    for(int i=0;i<n and i<=x;i++){
        if(i==n-1 && (x^current_or)!=0){
            cout << (x ^ current_or) << ' ';
            out++;
            break;
        }
        if((i&x)==i){
            cout << i << ' ';
            current_or|=i;
            out++;
        }else break;
    }
    while(out<n){
        cout << x << ' ';
        out++;
    }
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}