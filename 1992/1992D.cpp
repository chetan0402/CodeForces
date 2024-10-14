#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    string arr;
    cin >> arr;
    int currentLoc=-1;
    while(currentLoc!=n){
        if(currentLoc==-1 || arr[currentLoc]=='L'){
            int logLoc=-1;
            int waterLoc=-1;
            for(int jump=m;jump>0;jump--){
                if(currentLoc+jump>=n){
                    cout << "YES" << endl;
                    return;
                }
                if(arr[currentLoc+jump]=='L'){
                    logLoc=jump;
                    break;
                }
                if(arr[currentLoc+jump]=='W' && waterLoc==-1) waterLoc=jump;
            }
            if(logLoc!=-1){
                currentLoc+=logLoc;
            }else if(waterLoc!=-1){
                currentLoc+=waterLoc;
            }else{
                cout << "NO" << endl;
                return;
            }
        }else{
            if(k==0){
                cout << "NO" << endl;
                return;
            }
            bool anyRan=false;
            for(int i=1;i<=k;i++){
                if(currentLoc+i==n || arr[currentLoc+i]=='L'){
                    k-=i;
                    if(k<0){
                        cout << "NO" << endl;
                        return;
                    }
                    currentLoc+=i;
                    anyRan=true;
                    break;
                }
                if(arr[currentLoc+i]=='C'){
                    cout << "NO" << endl;
                    return;
                }
            }
            if(!anyRan){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}