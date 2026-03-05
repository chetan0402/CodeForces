#include<iostream>
#include<vector>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int min2=n+1;

    for(int i=x;i<y;i++) min2=min(min2,arr[i]);

    queue<int> q1;
    for(int i=0;i<x;i++) q1.push(arr[i]);
    for(int i=y;i<n;i++) q1.push(arr[i]);
    queue<int> q2;
    for(int i=x;i<y;i++) q2.push(arr[i]);

    while(q2.size() && q2.front()!=min2){
        q2.push(q2.front());
        q2.pop();
    }

    while(q1.size() && q2.size()){
        if(q1.front()<q2.front()){
            cout << q1.front() << " ";
            q1.pop();
        }else while(q2.size()){
            cout << q2.front() << " ";
            q2.pop();
        }
    }

    while(q1.size()){
        cout << q1.front() << " ";
        q1.pop();
    }

    while(q2.size()){
        cout << q2.front() << " ";
        q2.pop();
    }

    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}