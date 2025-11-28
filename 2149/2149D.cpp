#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string arr;cin>>arr;

    vector<int> posA;
    vector<int> posB;

    for(int i=0;i<n;i++)
    if(arr[i]=='a') posA.push_back(i);
    else posB.push_back(i);

    if(posA.size()<=1 || posB.size()<=1){
        cout << 0 << endl;
        return;
    }

    int medianA=posA[posA.size()/2];
    int medianB=posB[posB.size()/2];

    int costA=0;
    int costB=0;

    for(int i=0;i<posA.size();i++){
        int offset=i-posA.size()/2;
        costA+=abs(posA[i]-(medianA+offset));
    }

    for(int i=0;i<posB.size();i++){
        int offset=i-posB.size()/2;
        costB+=abs(posB[i]-(medianB+offset));
    }

    cout << min(costA,costB) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}