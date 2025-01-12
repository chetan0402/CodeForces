#include<iostream>
#include<vector>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    priority_queue<vector<int>,vector<vector<int>>,greater<>> pq;
    pq.push({0,0});
    pq.push({arr[0],0});
    int best=k-arr[0];
    while(!pq.empty()){
        vector<int> cur=pq.top();
        pq.pop();
        if(cur[0]==k || best==0){
            cout << 0 << endl;
            return;
        }
        if(cur[1]+1!=n){
            int newSum=cur[0]+arr[cur[1]+1];
            if(newSum<=k){
                best=min(k-newSum,best);
                pq.push({newSum,cur[1]+1});
            }
            pq.push({cur[0],cur[1]+1});
        }
    }
    cout << best << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}