#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    int part1Zero=0; // a even position, b odd position
    int part2Zero=0; // a odd positon, b even position
    int needed1=0;
    int needed2=0;
    for(int i=0;i<n;i+=2){
        needed1++;
        if(a[i]=='0') part1Zero++;
        if(i+1<n && b[i+1]=='0') part1Zero++;
    }
    for(int i=1;i<n;i+=2){
        needed2++;
        if(a[i]=='0') part2Zero++;
        if(b[i-1]=='0') part2Zero++;
    }
    if(a.size()%2==1 && b[n-1]=='0') part2Zero++;
    if(needed1<=part1Zero && needed2<=part2Zero) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}