#include<iostream>
#include<vector>
using namespace std;

long long score(vector<int>&moveTo,vector<int>&posScore,int currentPos,int turns,int n){
    long long traverseScore=0;
    long long highestScore=0;
    long long highest=posScore[currentPos];
    highestScore=(traverseScore+turns*highest);
    for(long long i=0;i<turns;i++){
        if(i==n){
            break;
        }
        traverseScore+=posScore[currentPos];
        if(highest<posScore[currentPos]){
            highest=posScore[currentPos];
            highestScore=max(highestScore,(traverseScore+(turns-i-1)*highest));
        }
        currentPos=moveTo[currentPos]-1;
    }
    highestScore=max(highestScore,traverseScore);
    return highestScore;
}

void solve(){
    long long n,k,pb,ps;
    cin >> n >> k >> pb >> ps;
    vector<int> p;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        p.push_back(temp);
    }
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    long long b=score(p,a,pb-1,k,n);
    long long s=score(p,a,ps-1,k,n);
    
    if(b==s){
        cout << "Draw" << endl;
    }else if(b>s){
        cout << "Bodya" << endl;
    }else if(b<s){
        cout << "Sasha" << endl;
    }
}

int main(){
    int tt;
    cin>>tt;
    while(tt--)solve();
}