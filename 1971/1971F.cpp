#include<iostream>
#include<cmath>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int pointPerSubQuad=0;
    int pointPerQuad=1;
    int startPoint=1;

    for(long long i=n;i>=(n/sqrt(2));i--){
        for(long long j=startPoint;true;j++){
            if(j<i){
                long long dist=sqrt(i*i+j*j);
                if(dist >= n+1){
                    break;
                }
                if(n <= dist){
                    startPoint=j;
                    pointPerSubQuad++;
                }
            }else if(j==i){
                long long dist=sqrt(i*i+j*j);
                if(n<=dist && dist < n+1){
                    pointPerQuad++;
                }
                break;
            }else{
                break;
            }
        }
    }

    cout << pointPerSubQuad*8 + pointPerQuad*4<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}