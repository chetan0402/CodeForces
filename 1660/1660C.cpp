#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    string arr;cin>>arr;
    int n=arr.size();

    vector<int> memo(n,-1);

    auto dfs=[&](auto&self,int start)->int{
        if(start>=n) return 0;
        if(memo[start]!=-1) return memo[start];
        if(start+1<n && arr[start]==arr[start+1]) return self(self,start+2);
        memo[start]=1+self(self,start+1);
        char charToFind=arr[start];
        for(int i=start+1;i<n;i++){
            if(arr[i]==charToFind) return memo[start]=min(memo[start],(i-start-1)+self(self,i+1));
        }
        return memo[start];
    };

    cout << dfs(dfs,0) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}