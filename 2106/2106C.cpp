#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> brr(n);
    for(int i=0;i<n;i++) cin>>brr[i];
    
    int x;
    bool xSet=false;
    for(int i=0;i<n;i++) if(arr[i]!=-1 && brr[i]!=-1){
        if(!xSet){
            x=arr[i]+brr[i];
            xSet=true;
        }
        if(xSet && arr[i]+brr[i]!=x){
            cout << 0 << endl;
            return;
        }
    }

    if(!xSet){
        int startOfX=0;
        int endOfX=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]!=-1){
                startOfX=max(startOfX,arr[i]);
                endOfX=min(endOfX,k+arr[i]);
            }
            if(brr[i]!=-1){
                startOfX=max(startOfX,brr[i]);
                endOfX=min(endOfX,k+brr[i]);
            }
        }
        cout << endOfX-startOfX+1 << endl;
        return;
    }

    int ans=1;
    for(int i=0;i<n;i++) if(arr[i]==-1 || brr[i]==-1){
        if(arr[i]==-1 && brr[i]!=-1){
            if(x-brr[i]>k || x-brr[i]<0){
                cout << 0 << endl;
                return;
            }
        }
        if(arr[i]!=-1 && brr[i]==-1){
            if(x-arr[i]>k || x-arr[i]<0){
                cout << 0 << endl;
                return;
            }
        }
        if(arr[i]==-1 && brr[i]==-1) ans*=(x);
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}