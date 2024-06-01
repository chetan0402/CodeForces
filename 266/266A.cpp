#include<iostream>
using namespace std;

int main(){
    int len;
    cin >> len;
    string line;
    cin >> line;
    int answer=0;

    for(int i=0;i<(len-1);i++){
        if(line[i]==line[i+1]){
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}