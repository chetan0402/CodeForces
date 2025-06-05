#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    map<int,int> guesses;
    for(auto day:arr) guesses[day]++;

    bool twoFound=false;
    for(auto [day, guess]:guesses){
        if(guess>=4 || (guess>=2 && twoFound)){
            cout << "Yes" << endl;
            return;
        }
        if(guess>=2) twoFound=true;
        if(!guesses.count(day+1)) twoFound=false;
    }
    
    cout << "No" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}