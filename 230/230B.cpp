#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

vector<bool> isPrime;

void sieve(){
    auto n=isPrime.size()-1;
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(!isPrime[i]) continue;
        for(int j=i*i;j<=n;j+=i) isPrime[j]=false;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int max_val=INT_MIN;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        max_val=max(max_val,arr[i]);
    }
    isPrime.assign(sqrt(max_val)+1,true);
    sieve();
    for(auto num:arr){
        int sq=sqrt(num);
        if(sq*sq==num && isPrime[sq]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}