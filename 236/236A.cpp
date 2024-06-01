#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> seenChar;
    string line;
    cin >> line;

    for(char c:line){
        bool seen=false;
        for(char element:seenChar){
            if(c==element){
                seen=true;
                break;
            }
        }
        if(!seen){
            seenChar.push_back(c);
        }
    }

    cout << ((seenChar.size()%2) ? ("IGNORE HIM!") : ("CHAT WITH HER!"));
    return 0;
}