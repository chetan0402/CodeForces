#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin >> arr[i];
    }
    long long result=0;

    for(long long i=0;i<n-2;i++){
        for(long long j=i+1;j<n-2;j++){
            if(
                (arr[i]!=arr[j] && arr[i+1]==arr[j+1] && arr[i+2]==arr[j+2]) ||
                (arr[i]==arr[j] && arr[i+1]!=arr[j+1] && arr[i+2]==arr[j+2]) ||
                (arr[i]==arr[j] && arr[i+1]==arr[j+1] && arr[i+2]!=arr[j+2])
            ){
                result++;
            }
        }
    }

    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}