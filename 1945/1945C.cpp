#include<iostream>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    int right=0;
    int left=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='1') right++;
        if(arr[i]=='0') left++;
    }
    int currentHappy=right-left;
    int maxHappy=INT_MIN;
    int indexMax=-1;
    for(int i=-1;i<n;i++){
        if(i!=-1){
            switch(arr[i]){
                case '1':
                    currentHappy--;
                    break;
                case '0':
                    currentHappy++;
                    break;
            }
        }
        if(currentHappy==(n+1)/2){
            cout << i+1 << endl;
            return;
        }else{
            if(currentHappy>maxHappy){
                maxHappy=currentHappy;
                indexMax=i;
            }
        }
    }
    cout << indexMax+1 << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}