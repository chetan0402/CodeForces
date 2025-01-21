#include<iostream>
#include<vector>
#include<map>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    map<int,int> freq;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        freq[temp]++;
    }
    int ans=0;
    while(freq.size()){
        int key1=freq.begin()->first;
        int key2=k-key1;
        if(key1 == key2){
            ans += freq[key1] / 2;
            freq.erase(freq.find(key1));
        } else if(freq.count(key2)){
            int val1=freq[key1];
            int val2=freq[key2];
            ans+=min(val1,val2);
            freq.erase(freq.find(key1));
            freq.erase(freq.find(key2));
        }else{
            freq.erase(freq.find(key1));
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}