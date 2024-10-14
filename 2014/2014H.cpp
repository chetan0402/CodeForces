#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<random>
#define int long long
using namespace std;

random_device dev;
mt19937 rng(dev());
map<int,int> mapping;
int hashing(int n){
    map<int,int>::iterator it=mapping.find(n);
    if(it!=mapping.end()) return it->second;
    else{
        mapping[n]=rng();
        return mapping[n];
    }
}

void solve(){
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    vector<int> prefix(n+1,0);
    for(int i=0;i<n;i++) prefix[i+1]=prefix[i]^(hashing(arr[i]));
    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        cout << ((prefix[r]^prefix[l-1])?"NO":"YES") << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}