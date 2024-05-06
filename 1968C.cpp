#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n-1;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << 1000 << " " << 1000+arr[0] << " ";
    int prev = arr[0]+1000;
    for(int i=1;i<n-1;i++){
        prev = arr[i] + prev;
        cout << prev << " ";
    }
    cout << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--)solve();
    return 0;
}