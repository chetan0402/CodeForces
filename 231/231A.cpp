#include<iostream>
#include<string>
using namespace std;

int main(){
    int times;
    cin >> times;
    int solved=0;

    while(times){
        string confidence;
        do{
            getline(cin,confidence);
        }while(confidence=="");

        int level=0;
        for(char element:confidence){
            if(element=='1'){
                level+=1;
            }
        }
        if(level>=2){
            solved+=1;
        }
        times--;
    }

    cout << solved << endl;

    return 0;
}