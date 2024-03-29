#include<iostream>
using namespace std;

void subtract(int&);

int main(){
    int input,times;
    cin >> input >> times;
    for(int i=0;i<times;i++){
        subtract(input);
    }
    cout << input << endl;
    return 0;
}

void subtract(int&number){
    if(number%10){
        number-=1;
    }else{
        number/=10;
    }
}