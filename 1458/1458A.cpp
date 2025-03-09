#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

inline int gcd_init(int a,int b){
    if(b>a) swap(a,b);
    return gcd(a,b);
}

signed main(){
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> brr(m);
    for(int i=0;i<m;i++) cin>>brr[i];
    int max_val = *max_element(arr.begin(), arr.end());
    int pre_gcd=max_val-arr[0];
    for(int i=1;i<n;i++) pre_gcd=gcd_init(pre_gcd,max_val-arr[i]);
    for(int j=0;j<m;j++) cout << gcd_init(pre_gcd,max_val+brr[j]) << " ";
}