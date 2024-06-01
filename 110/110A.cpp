#include<iostream>
using namespace std;

int main(){
    int64_t input;
    cin >> input;
    short count=0;

    while(input!=0){
        if(input%10 == 4 || input%10==7){
            count+=1;
        }
        input/=10;
    }
    if(count==4 || count==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}