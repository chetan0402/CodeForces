#include<iostream>
using namespace std;

int isBinDec(int);
int toBin(int);

int main(){
    int times;
    cin >> times;

    for(int i=0;i<times;i++){
        int input;
        cin >> input;
        int track=1;
        int track_bin=toBin(track);
        bool solFound=false;

        while(track_bin<=input){
            if(isBinDec(input)){
                solFound=true;
                break;
            }
            while(input%track_bin==0){
                if(track_bin==1){
                    break;
                }
                input/=track_bin;
                if(input==1){
                    solFound=true;
                    break;
                }
            }
            track++;
            track_bin=toBin(track);
        }
        if(solFound){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

int isBinDec(int number){
    while(number!=0){
        if(number%10!=0 && number%10!=1){
            return 0;
        }
        number/=10;
    }
    return 1;
}

int toBin(int number){
    long result=0;
    int mul=1;
    while(number>=1){
        result+= number%2 * mul;
        number/=2;
        mul*=10;
    }
    return result;
}