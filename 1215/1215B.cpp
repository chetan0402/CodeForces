#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int cur=0;

    int cnt1=0;
    int cnt2=0;

    int pos=0;

    for(auto num:arr){
        if(cur%2) cnt2++;
        else cnt1++;

        if(num<0) cur++;

        if(cur%2) pos+=cnt2;
        else pos+=cnt1;
    }

    cout << n*(n+1)/2 - pos << " " << pos << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t; //remove befoer submitting
    while(t--)solve();
}