#include<iostream>
using namespace std;

int main(){
    int times;
    cin >> times;

    for(int ignored=0;ignored<times;ignored++){
        int scale;
        cin >> scale;
        scale*=2;

        for(int i=0;i<scale;i++){
            for(int j=0;j<scale;j++){
                if((i/2+j/2)%2){
                    cout << ".";
                }else{
                    cout << "#";
                }
            }
            cout << endl;
        }
    }
    return 0;
}