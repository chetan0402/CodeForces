#include<iostream>
#include<vector>
#include<set>
#define int long long
using namespace std;

void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];
    int aIndex=0;
    set<int> pending;
    for(int i=0;i<m;i++){
        if(b[i]==a[aIndex]){
            aIndex++;
            pending.insert(b[i]);
            continue;
        }
        if(pending.find(b[i])!=pending.end()) continue;
        cout << "TIDAK" << endl;
        return;
    }
    cout << "YA" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}