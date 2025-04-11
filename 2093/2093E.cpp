#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,k;
    cin >> n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    
    auto fn=[&](int minMex){
        vector<bool> exist(minMex+1,false);
        int curMex=0;
        int i=0;
        int partitions=0;
        while(i<n){
            while(curMex<minMex && i<n){
                auto num=arr[i];
                i++;
                if(num<=minMex) exist[num]=true;
                while(curMex<exist.size() && exist[curMex]) curMex++;
            }
            if(curMex>=minMex) partitions++;
            exist.assign(minMex+1,false);
            curMex=0;
        }
        return (partitions>=k);
    };

    int l=0;
    int r=*max_element(arr.begin(),arr.end())+1;
    while(l<r){
        auto mid=l+(r-l+1)/2;
        if(fn(mid)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    cout << l << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}