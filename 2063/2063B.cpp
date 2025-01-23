#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    vector<int> dupLeft=arr;
    vector<int> dupRight=arr;
    sort(dupLeft.begin(),dupLeft.begin()+r);
    sort(dupRight.begin()+l-1,dupRight.end());
    int leftSum=0;
    int rightSum=0;
    for(int i=0;i<r-l+1;i++) leftSum+=dupLeft[i];
    for(int i=l-1;i<l-1+r-l+1;i++) rightSum+=dupRight[i];
    cout << min(leftSum,rightSum) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}