#include<iostream>
using namespace std;

void lowercase(string&str,int N){
    int diff = ((int)'a') - ((int) 'A');
    int index=0;
    while(index<N){
        int charval = (int) str[index];
        if('A' <= charval && charval <= 'Z'){
            charval = charval + diff;
        }
        str[index] = (char) charval;
        index++;
    }
}

int main(){
    string line1;
    string line2;
    cin>>line1;
    cin>>line2;
    int N=line1.length();
    lowercase(line1,N);
    lowercase(line2,N);
    int index=0;

    while(index<N){
        if(line1[index]<line2[index]){
            cout << -1 << endl;
            return 0;
        }
        if(line1[index]>line2[index]){
            cout << 1 << endl;
            return 0;
        }
        index++;
    }
    cout << 0 << endl;

    return 0;
}