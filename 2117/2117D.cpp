#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];

    int smallestIndex=0;
    for(int i=1;i<n;i++) if(arr[i]<arr[smallestIndex]) smallestIndex=i;

    if(smallestIndex!=0 && smallestIndex!=n-1){
        cout << "NO" << endl;
        return;
    }

    int nextElement=(smallestIndex==0)?1:n-2;

    if((2*arr[smallestIndex]-arr[nextElement])%(n+1)){
        cout << "NO" << endl;
        return;
    }

    int y=arr[nextElement]-arr[smallestIndex];
    int x=(2*arr[smallestIndex]-arr[nextElement])/(n+1);
    
    if(x<0){
        cout << "NO" << endl;
        return;
    }

    int num=(n+1)*x+y;

    if(smallestIndex==0){
        for(int i=0;i<n;i++){
            if(arr[i]!=num){
                cout << "NO" << endl;
                return;
            }
            num+=y;
        }
    }else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=num){
                cout << "NO" << endl;
                return;
            }
            num+=y;
        }
    }

    cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}