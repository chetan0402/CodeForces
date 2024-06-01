#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int lonely=1;
    vector<int> OR(n);
    for(;lonely<=n;lonely++){
        bool stillSame=true;
        for(int i=0;i<(n-lonely+1);i++){
            OR[i]=OR[i]|arr[i+lonely-1];
            if(stillSame && i!=0 && OR[i-1]!=OR[i]){
                stillSame=false;
            }
        }
        if(stillSame){
            cout << lonely << endl;
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}