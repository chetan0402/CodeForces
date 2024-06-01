#include<iostream>
#include<string>
using namespace std;

void solve(){
    string input;
    cin >> input;
    long long n=input.size();
    long long cost=0;
    long long start=-1;
    for(long long i=0;i<n;i++){
        switch(input[i]){
            case '1':
                if(start==-1){
                    start=i;
                }
                break;
            case '0':
                if(start!=-1){
                    cost+=i-start+1;
                    char temp=input[i];
                    input[i]=input[start];
                    input[start]=temp;
                    start++;
                }
                break;
        }
    }
    cout << cost << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}