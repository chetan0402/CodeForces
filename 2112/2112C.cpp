#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];

    sort(arr.begin(),arr.end());

    auto searchLeftMost=[&](int x,int start)->int{
        int left=start;
        int right=n-1;

        while(left<right){
            int mid=left+(right-left)/2;
            if(arr[mid]>=x) right=mid;
            else left=mid+1;
        }

        return right;
    };

    auto searchRightMost=[&](int x,int start)->int{
        int left=start;
        int right=n-1;

        while(left<right){
            int mid=left+(right-left)/2;
            if(arr[mid]>x) right=mid-1;
            else left=mid+1;
        }

        return left;
    };

    int ans=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]+arr[j]>arr.back()){
                ans+=(n-j-1)*(n-j-1)-((n-j-2)*(n-j-1)/2);
                break;
            }
            // i+j>k
            // i+j+k>max
            // k>max-i-j
            int kEnd=searchRightMost(arr[i]+arr[j]-1,j+1);
            int kStart=searchLeftMost(arr.back()-arr[i]-arr[j]+1,j+1);
            ans+=max(0LL,(kEnd-kStart));
        }
    }

    // for(int i=0;i<n-1;i++){
    //     int j=searchLeftMost(arr.back()-arr[i]+1,i+1);
    //     if(j==n-1) continue;
    //     ans+=(n-j-1)*(n-j-1)-((n-j-2)*(n-j-1)/2);
    // }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}