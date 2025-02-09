#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

int searchMin(vector<int>&brr,int num){
    int l=0;
    int r=brr.size()-1;
    while(l<r){
        auto mid=(r-l)/2+l;
        if(brr[mid]>=num) r=mid;
        else l=mid+1;
    }
    return brr[r];
}

void solve(){
    int n,m;cin >> n >> m;
    vector<int> arr(n);for(int i=0;i<n;i++) cin >> arr[i];
    vector<int> brr(m);for(int i=0;i<m;i++) cin >> brr[i];
    sort(brr.begin(),brr.end());

    for(int i=0;i<n;i++){
        auto optimal_compliment=(i==0) ? searchMin(brr,0) : searchMin(brr,arr[i-1]+arr[i]);
        auto minimum=min(optimal_compliment-arr[i],arr[i]);
        auto maximum=max(optimal_compliment-arr[i],arr[i]);
        if(i==0 || (i>0 && arr[i-1]<=minimum)) arr[i]=minimum;
        else arr[i]=maximum;

        if(i>0 && arr[i-1]>arr[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}