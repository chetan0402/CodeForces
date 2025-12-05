#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string arr;cin>>arr;

    vector<int> ans;

    for(int i=1;i<n-1;i++){
        if(arr[i]!=arr.front()){
            arr[i]=arr.front();
            arr[i+1]='B'+'W'-arr[i+1];
            ans.push_back(i+1);
        }
    }

    if(arr.front()==arr.back()){
        cout << ans.size() << '\n';
        for(auto num:ans) cout << num << " ";
        cout << endl;
        return;
    }

    for(int i=n-2;i>0;i--){
        if(arr[i]!=arr.back()){
            arr[i]=arr.back();
            arr[i-1]='B'+'W'-arr[i-1];
            ans.push_back(i);
        }
    }
    
    if(arr.front()==arr.back()){
        cout << ans.size() << '\n';
        for(auto num:ans) cout << num << " ";
        cout << endl;
        return;
    }

    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    while(t--)solve();
}