#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    vector<int> cnt(10,0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    auto valid=[&]()->bool{
        if(cnt[0]>=3 && cnt[1]>=1 && cnt[2]>=2 && cnt[3]>=1 && cnt[5]>=1) return true;
        return false;
    };
    for(int i=0;i<n;i++){
        cnt[arr[i]]++;
        if(valid()){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}