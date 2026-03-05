#include<iostream>
#include<vector>
#include<unordered_map>
#define int long long
using namespace std;

bool failable(int n){
    unordered_map<int,int> factors;
    for(int i=2;i<=n;i++) while(n%i==0){
        n/=i;
        factors[i]++;
    }
    return (factors.size()>1);
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

    for(auto num:arr){
        if(failable(num)){
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