#include <iostream>
#include<cmath>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    string x,y;
    cin >> x >> y;
    int n=x.size();
    for(int i=0;i<n;i++){
        if((x>y && x[i]>y[i]) || (x<y && x[i]<y[i])) swap(x[i],y[i]);
    }
    cout << x << endl << y << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}