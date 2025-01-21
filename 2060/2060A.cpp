#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    vector<int> arr(4);
    for(int i=0;i<4;i++) cin >> arr[i];
    vector<int> options(3);
    options[0]=arr[0]+arr[1];
    options[1]=arr[2]-arr[1];
    options[2]=arr[3]-arr[2];
    int mostFreq=options[0];
    int max_freq=0;
    for(int i=0;i<3;i++){
        int freq=0;
        for(int j=i;j<3;j++){
            if(options[i]==options[j]) freq++;
        }
        if(freq>max_freq){
            max_freq=freq;
            mostFreq=options[i];
        }
    }
    cout << (arr[0]+arr[1]==mostFreq)+(arr[1]+mostFreq==arr[2])+(mostFreq+arr[2]==arr[3]) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}