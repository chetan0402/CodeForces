#include<iostream>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    string pie="pie";
    string map="map";
    string mapie="mapie";
    int indexP=0;
    int indexM=0;
    int indexMP=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == pie[indexP]) indexP++;
        else indexP = (arr[i] == pie[0]) ? 1 : 0;

        if(arr[i] == map[indexM]) indexM++;
        else indexM = (arr[i] == map[0]) ? 1 : 0;

        if(arr[i] == mapie[indexMP]) indexMP++;
        else indexMP = (arr[i] == mapie[0]) ? 1 : 0;

        if(indexP==3 || indexM==3) count++;
        if(indexMP==5) count--;
    }
    cout << count << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}