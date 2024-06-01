#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string line;
    cin>>line;
    vector<int> list;
    string temp;
    for(char c:line){
        if(c=='+'){
            list.push_back(stoi(temp));
            temp="";
            continue;
        }
        temp.append(string(1,c));
    }
    list.push_back(stoi(temp));
    for(int i=0;i<list.size();i++){
        int smallestIndex=i;
        for(int ii=i;ii<list.size();ii++){
            if(list[ii] < list[smallestIndex]){
                smallestIndex=ii;
            }
        }
        int swap=list[smallestIndex];
        list[smallestIndex] = list[i];
        list[i] = swap;
    }
    cout << list[0];
    for(int i=1;i<list.size();i++){
        cout << "+";
        cout << list[i];
    }
    return 0;
}