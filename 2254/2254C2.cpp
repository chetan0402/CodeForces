#include<iostream>
#include<vector>
#define int long long
#define DEBUG(x) cout << "DEBUG:" << x << " "
using namespace std;

void solve(){
    int n;cin>>n;
    string arr1;cin>>arr1;
    string arr2;cin>>arr2;
    int odd1=0;
    int odd2=0;
    int even1=0;
    int even2=0;
    for(int i=0;i<n;i+=2){
        if(arr1[i]=='1') odd1++;
        if(arr2[i]=='1') odd2++;
    }
    for(int i=1;i<n;i+=2){
        if(arr1[i]=='1') even1++;
        if(arr2[i]=='1') even2++;
    }
    
    if(odd1!=odd2 || even1!=even2){
        cout << -1 << endl;
        return;
    }

    int ans=0;

    int j=0;
    for(int i=0;i<n;i+=2) if(arr1[i]=='0'){
        while(arr2[j]!='0') j+=2;
        ans+=abs(j-i)/2;
        j+=2;
    }

    j=1;
    for(int i=1;i<n;i+=2) if(arr1[i]=='0'){
        while(arr2[j]!='0') j+=2;
        ans+=abs(j-i)/2;
        j+=2;
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
}