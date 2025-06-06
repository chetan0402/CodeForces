#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

vector<bool> sieve;
vector<int> sumNeeded={0};

void init(){
    int n=5800080;
    n++;
    sieve.assign(n,true);
    sieve[0]=sieve[1]=false;
    int sum=0;
    for(int i=2;i<=n;i++) if(sieve[i]){
        sum+=i;
        sumNeeded.push_back(sum);
        for(int j=i*i;j<=n;j+=i) sieve[j]=false;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];

    if(n==1){
        cout << 0 << endl;
        return;
    }

    sort(arr.begin(),arr.end());

    vector<int> suffixSum(n+1,0);
    suffixSum[n]=0;
    for(int i=n-1;i>=0;i--) suffixSum[i]=suffixSum[i+1]+arr[i];

    for(int i=0;i<n;i++){
        int len=n-i;
        if(suffixSum[i]>=sumNeeded[len]){
            cout << i << endl;
            return;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    init();
    while(t--)solve();
}