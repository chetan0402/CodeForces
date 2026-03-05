#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
#define DEBUG(x) cout << x << " "
using namespace std;

int reduce(int n){
    unordered_map<int,int> factors;
    int minF=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && minF==1) minF=i;
        while(n%i==0){
            n/=i;
            factors[i]++;
        }
        if(factors.size()>1) return -1;
    }
    if(n>1){
        if(minF==1) minF=n;
        factors[n]++;
        if(factors.size()>1) return -1;
    }
    return minF;
}

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    bool sorted=true;

    for(int i=0;i+1<n;i++) if(arr[i]>arr[i+1]){
        sorted=false;
        break;
    }

    if(sorted){
        cout << "Bob" << endl;
        return;
    }

    for(int i=0;i<n;i++){
        arr[i]=reduce(arr[i]);
        if(arr[i]==-1 || (i>0 && arr[i-1]>arr[i])){
            cout << "Alice" << endl;
            return;
        }
    }

    cout << "Bob" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}