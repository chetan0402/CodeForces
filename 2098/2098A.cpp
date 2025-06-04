#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string num;cin>>num;
    vector<int> cnt(10,0);
    for(auto n:num) cnt[n-'0']++;
    int numLeft=10;
    for(int i=9;i>=0;i--) if(i>=numLeft-1 && cnt[i]>0){
        cout << i;
        cnt[i]--;
        numLeft--;
    }
    while(numLeft){
        for(int i=numLeft-1;i<10;i++) if(cnt[i]){
            cout << i;
            cnt[i]--;
            numLeft--;
            break;
        }
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}