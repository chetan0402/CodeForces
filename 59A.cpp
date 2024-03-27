#include<iostream>
using namespace std;

int main(){
    string line;
    cin >> line;
    int diff=0;

    for(char c:line){
        if('A' <= c && c <= 'Z'){
            diff++;
        }else{
            diff--;
        }
    }

    if(diff<=0){
        for(char c:line){
            if('A' <= c && c <= 'Z'){
                cout << (char) (c - 'A' + 'a');
            }else{
                cout << c;
            }
        }
    }else{
        for(char c:line){
            if('a' <= c && c <= 'z'){
                cout << (char) (c - 'a' + 'A');
            }else{
                cout << c;
            }
        }
    }

    return 0;
}