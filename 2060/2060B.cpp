#include<iostream>
#include<vector>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        int temp;
        cin >> temp;
        pq.push({temp,i+1});
    }
    vector<int> order(n,-1);
    int cur_ptr=0;
    while(!pq.empty()){
        int cow=pq.top().second;
        pq.pop();
        if(order[cur_ptr]==-1){
            order[cur_ptr]=cow;
            cur_ptr=(cur_ptr+1)%n;
        }else{
            if(order[cur_ptr]!=cow){
                cout << -1 << endl;
                return;
            }else{
                cur_ptr=(cur_ptr+1)%n;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << order[i] << " ";
    }
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}