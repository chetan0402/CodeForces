#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    set<char> aux;
    for(int i=0;i<n;i++){
        aux.insert(input[i]);
    }
    unordered_map<char,char> encoding;
    int auxlen=aux.size();
    for(int i=0;i<(auxlen+1)/2;i++){
        set<char>::iterator it=aux.begin();
        advance(it,i);
        char temp1=*it;
        it=aux.begin();
        advance(it,auxlen-1-i);
        char temp2=*it;
        encoding[temp1]=temp2;
        encoding[temp2]=temp1;
    }
    for(int i=0;i<n;i++){
        cout << encoding[input[i]];
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}