#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    int Cn5=n*(n-1)*(n-2)*(n-3)*(n-4)/(5*4*3*2);
    int Cn6=Cn5*(n-5)/6;
    int Cn7=Cn6*(n-6)/7;
    cout << Cn5 + Cn6 + Cn7 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}