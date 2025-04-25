#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> brr(m);
    for(int i=0;i<m;i++) cin>>brr[i];

    vector<int> prefix(m,n);
    int ptrArr=0;
    int ptrBrr=0;
    while(ptrArr<n && ptrBrr<m){
        if(arr[ptrArr]>=brr[ptrBrr]){
            prefix[ptrBrr]=ptrArr;
            ptrBrr++;
        }
        ptrArr++;
    }

    vector<int> suffix(m,-1);
    ptrArr=n-1;
    ptrBrr=m-1;
    while(ptrArr>=0 && ptrBrr>=0){
        if(arr[ptrArr]>=brr[ptrBrr]){
            suffix[ptrBrr]=ptrArr;
            ptrBrr--;
        }
        ptrArr--;
    }

    for(int i=0;i<m;i++){
        if(prefix[i]<=suffix[i]){
            cout << 0 << endl;
            return;
        }
    }
    int possibleAns=INT_MAX;
    if(1<m){if(suffix[1]>=0) possibleAns=min(possibleAns,brr[0]);}
    else possibleAns=min(possibleAns,brr[0]);
    if(m-2>=0) {if(prefix[m-2]<n) possibleAns=min(possibleAns,brr[m-1]);}
    else possibleAns=min(possibleAns,brr[m-1]);
    for(int i=1;i<m-1;i++){
        if(prefix[i-1]<suffix[i+1]) possibleAns=min(possibleAns,brr[i]);
    }
    if(possibleAns==INT_MAX) cout << -1 << endl;
    else cout << possibleAns << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}