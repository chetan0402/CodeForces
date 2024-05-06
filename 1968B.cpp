#include<iostream>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string bin1;
    string bin2;
    cin >> bin1;
    cin >> bin2;
    int k=min(n,m);
    int point1=0;
    for(int i=0;i<m;i++){
        if(bin1[point1]==bin2[i]){
            point1++;
        }
        if(point1==n){break;}
    }
    cout << point1 << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--)solve();
    return 0;
}