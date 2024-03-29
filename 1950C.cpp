#include<iostream>
#include<string>
using namespace std;

int main(){
    int times;
    cin >> times;

    for(int i=0;i<times;i++){
        string input;
        cin >> input;
        int hr=stoi(input.substr(0,2));
        int min=stoi(input.substr(3,2));

        if(1<=hr && hr<12){
            cout << input << " AM" << endl;
        }else if(12<hr){
            hr-=12;
            if(hr/10==0){
                cout << "0";
            }
            cout << hr << ":" << input.substr(3,2) << " PM" << endl;
        }else if(hr==12){
            cout << "12:" << input.substr(3,2) << " PM" << endl;
        }else if(hr==0){
            cout << "12:" << input.substr(3,2) << " AM" << endl;
        }else{
            cout << "case not found" << endl;
        }
    }

    return 0;
}