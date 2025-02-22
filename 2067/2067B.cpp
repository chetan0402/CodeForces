#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    vector<int> cnt(1000+1,0);
    int n;cin >> n;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        cnt[temp]++;
    }
    for(int i=1;i<1000;i++){
        if(cnt[i]>2){
            cnt[i+1]+=cnt[i]-2;
            cnt[i]=2;
        }else if(cnt[i]==1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}