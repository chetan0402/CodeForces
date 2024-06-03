#include <iostream>
#include<vector>
#include<map>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(k>n){
        cout << n << endl;
        return;
    }
    map<int, int> countMap;
    for(int i=0;i<n;i++){
        if(countMap[arr[i]]<k) countMap[arr[i]]++;
    }
    int kCount=0;
    map<int,int>::iterator it=countMap.begin();
    while(it!=countMap.end()){
        if(it->second == k) kCount++;
        it=next(it);
    }
    if(kCount==0){
        cout << n << endl;
    }else{
        cout << k-1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}