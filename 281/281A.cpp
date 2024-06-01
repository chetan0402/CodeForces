#include<iostream>
using namespace std;

int main(){
    string line;
    cin >> line;

    if('a' <= line[0] && line[0] <= 'z'){
        line[0] = line[0] - 'a' + 'A';
    }
    cout << line;
    return 0;
}