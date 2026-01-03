#include<iostream>
#include<vector>
#include<climits>
#define int long long
using namespace std;

vector<int> fac(1,6);

int solve(int num,int i){
    if(num==0) return 0;
    if(num<0) return INT_MAX;
    if(i==fac.size()){
        int bits=0;
        for(int j=8*sizeof(num)-2;j>=0;j--) if(num&(1LL<<j)) bits++;
        return bits;
    }
    return min(solve(num,i+1),1+solve(num-fac[i],i+1));
}

void solve(){
    int n;cin>>n;
    cout << solve(n,0) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while(fac.back()<=1e12) fac.push_back(fac.back()*(fac.size()+3));
    int t;
    cin>>t;
    while(t--)solve();
}