#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,d,k;
    cin >> n >> d >> k;
    vector<int> intime(n,0);
    vector<int> outtime(n,0);
    for(int i=0;i<k;i++){
        int l,r;
        cin >> l >> r;
        l--;r--;
        intime[l]++;
        outtime[r]++;
    }
    int cur=0;
    for(int i=0;i<d;i++) cur+=intime[i];
    int maxValue=cur;
    int maxStart=0;
    int minValue=cur;
    int minStart=0;
    for(int i=1;i<=n-d;i++){
        cur+=intime[i+d-1];
        cur-=outtime[i-1];
        if(cur>maxValue){
            maxValue=cur;
            maxStart=i;
        }
        if(cur<minValue){
            minValue=cur;
            minStart=i;
        }
    }
    cout << maxStart+1 << " " << minStart+1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}