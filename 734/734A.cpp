#include<iostream>
using namespace std;

int main(){
    int times;
    string input;
    cin >> times;
    cin >> input;
    int whoWin=0;

    for(int i=0;i<times;i++){
        switch(input[i]){
            case 'A':
                whoWin+=1;
                break;
            case 'D':
                whoWin-=1;
        }
    }
    if(whoWin>0){
        cout << "Anton" << endl;
    }else if(whoWin<0){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    return 0;
}