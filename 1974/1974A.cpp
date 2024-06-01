#include<iostream>
using namespace std;

void solve(){
    int size1,size2;
    cin >> size1 >> size2;
    int numberOfpages=(size2+1)/2;
    if(size2%2){
        size1-=((numberOfpages-1)*7+11);
    }else{
        size1-=numberOfpages*7;
    }
    while(size1>0){
        numberOfpages++;
        size1-=15;
    }
    cout << numberOfpages << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}