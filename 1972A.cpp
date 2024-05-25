#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(a);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int pointA=0;
    int pointB=0;
    while(pointA<n && pointB<n){
        if(a[pointA]<=b[pointB]){
            pointA++;
        }
        pointB++;
    }
    cout << pointB-pointA << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}