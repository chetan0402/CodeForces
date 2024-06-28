#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    if(m==0){
        cout << n << endl;
        return;
    }
    m--;
    int num=n+m;
    int result=1;
    while((result-1)<=num){
        result=2*result;
    }
    cout << result-1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}