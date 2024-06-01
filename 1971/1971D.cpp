#include<iostream>
#include<string>
using namespace std;

void solve(){
    string input;
    cin >> input;
    int n=input.length();
    int cat1=0;
    int cat2=0;
    int cat3=0;
    bool cat1Flag=false;
    bool cat2Flag=false;
    bool cat3Flag=false;
    for(int i=0;i<n;i++){
        if(!cat1Flag && !cat2Flag && !cat3Flag){
            if(input[i]=='0'){
                cat1Flag=true;
            }else{
                cat3Flag=true;
            }
            continue;
        }
        if(cat1Flag){
            if(input[i]!='0'){
                cat2Flag=true;
                cat1Flag=false;
            }
            continue;
        }
        if(cat2Flag){
            if(input[i]=='0'){
                cat2++;
                cat1Flag=true;
                cat2Flag=false;
            }
            continue;
        }
        if(cat3Flag){
            if(input[i]=='0'){
                cat3++;
                cat1Flag=true;
                cat3Flag=false;
            }
            continue;
        }
    }
    if(cat1Flag){
        cat1++;
    }
    if(cat2Flag){
        cat2++;
    }
    if(cat3Flag){
        cat3++;
    }
    if(cat2>1){
        cat2 = 1+((cat2-1)*2);
    }
    cout << cat1+cat2+cat3 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}