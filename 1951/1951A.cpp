#include <iostream>
#include<cmath>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    int count1=0;
    int mx=-1;
    int mi=n;
    for(int i=0;i<n;i++){
        if(arr[i]=='1'){
            count1++;
            mx=max(mx,i);
            mi=min(mi,i);
        }
    }
    if(count1%2 || (count1==2 && mx-mi == 1)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}