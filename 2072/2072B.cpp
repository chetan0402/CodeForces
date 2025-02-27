#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n;
    int up=0;int down=0;
    cin >> n;
    char temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp=='-') up++;
        else down++;
    }
    int leftUp=up/2;
    int rightUp=up-leftUp;
    cout << leftUp*down*rightUp << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}