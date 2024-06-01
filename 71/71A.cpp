#include<iostream>
#include<string>
using namespace std;

int main(){
    int numberOfTimes;
    cin >> numberOfTimes;

    while(numberOfTimes){
        string input;
        cin >> input;

        if(input.length()<=10){
            cout << input << endl;
        }else{
            cout << input[0] << input.length()-2 << input[input.length()-1] << endl;
        }

        numberOfTimes--;
    }

    return 0;
}