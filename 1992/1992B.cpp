#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int total,n;
    cin >> total >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int answer=0;
    int max_number=0;
    for(int i=0;i<n;i++){
        answer+=2*arr[i]-1;
        max_number=max(max_number,arr[i]);
    }
    answer-=2*max_number-1;
    cout << answer << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}