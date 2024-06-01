#include<iostream>
using namespace std;

int main(){
    int numberOfInstructions;
    cin>>numberOfInstructions;
    int value=0;
    while(numberOfInstructions){
        char char1;
        char char2;
        char char3;
        cin>>char1>>char2>>char3;
        if(char2=='+'){
            value++;
        }else if(char2=='-'){
            value--;
        }
        numberOfInstructions--;
    }

    cout << value << endl;
    return 0;
}