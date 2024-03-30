#include<iostream>
using namespace std;

int similarScore(string,string,int);

int main(){
    int times;
    cin >> times;

    for(int time=0;time<times;time++){
        int n;
        cin >> n;
        string input;
        cin >> input;
        bool found=false;

        for(int div=n;div>=1;div--){
            if(found){
                break;
            }
            if(n%div==0 && div!=1){
                int unit_length=n/div;
                string unit;
                bool notExist=false;
                bool unitStringFound=false;

                for(int i=0;i<(div-1);i++){
                    if(notExist || unitStringFound){
                        break;
                    }
                    unit = input.substr(i*unit_length,unit_length);
                    for(int ii=(i+1);ii<div;ii++){
                        int diff=similarScore(unit,input.substr(ii*unit_length,unit_length),unit_length);
                        if(diff>=2){
                            notExist=true;
                            break;
                        }else if(diff==0){
                            unitStringFound=true;
                            break;
                        }
                    }
                }
                if(notExist){
                    continue;
                }
                int totalDiff=0;
                for(int i=0;i<div;i++){
                    int diff=similarScore(input.substr(i*unit_length,unit_length),unit,unit_length);
                    if(diff>=2){
                        notExist=true;
                        break;
                    }
                    totalDiff+=diff;
                }
                if(notExist){
                    continue;
                }
                if(totalDiff<=1){
                    cout << unit_length << endl;
                    found=true;
                }
            }
        }
        if(!found){
            cout << n << endl;
        }
    }

    return 0;
}

int similarScore(string str1,string str2,int length){
    int diffCount=0;
    for(int i=0;i<length;i++){
        if(str1[i]!=str2[i]){
            diffCount+=1;
        }
    }
    return diffCount;
}