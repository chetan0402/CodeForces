#include<iostream>
using namespace std;

int gcd(int num1,int num2){
    int current=min(num1,num2);
    while(current>1){
        if(num1%current==0 && num2%current==0)return current;
        current--;
    }
    return 1;
}

void solve(){
    int input;
    cin >> input;
    int highest=0;
    int y=0;
    for(int i=input-1;i>0;i--){
        int result=gcd(input,i)+i;
        if(highest<=result){
            highest=result;
            y=i;
        }
    }
    cout << y << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--)solve();
    return 0;
}