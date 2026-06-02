#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());

    int median=arr[n/2];

    int ans=0;
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]==median & arr[right]==median) break;
        if(arr[left]==median){
            ans++;
            right--;
        }else if(arr[right]==median){
            ans++;
            left++;
        }else{
            ans++;
            left++;
            right--;
        }
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}