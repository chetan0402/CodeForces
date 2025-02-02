#include<iostream>
#include<vector>
#include<unordered_set>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_set<int> arr;
    unordered_set<int> brr;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr.insert(temp);
    }
    for(int i=0;i<n;i++){
        cin >> temp;
        brr.insert(temp);
    }
    cout << ((arr.size() * brr.size() >= 3) ? "YES" : "NO") << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}