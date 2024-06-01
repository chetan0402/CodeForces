#include<iostream>
using namespace std;

int main(){
    int times=0;
    cin >> times;

    for(int i=0;i<times;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a<b && b<c){
            cout << "STAIR" << endl;
        }else if(a<b && b>c){
            cout << "PEAK" << endl;
        }else{
            cout << "NONE" << endl;
        }
    }

    return 0;
}