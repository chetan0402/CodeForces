#include<iostream>
using namespace std;

int getLongChain(const int,const bool[16]);


int linkable[16][16];
int n;

int main(){
    int times;
    cin >> times;

    while(times--){
        cin >> n;

        string firstEnd[16];
        string lastEnd[16];
        for(int i=0;i<n;i++){
            cin >> firstEnd[i] >> lastEnd[i];
        }
        for(int i=0;i<n;i++){
            for(int ii=i+1;ii<n;ii++){
                linkable[ii][i]=linkable[i][ii]=(firstEnd[i]==firstEnd[ii] || lastEnd[i]==lastEnd[ii]);
            }
        }
        int longestChain=0;
        for(int i=0;i<n;i++){
            bool options[16]={true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true};
            options[i]=0;
            int currentScore=1+getLongChain(i,options);
            if(longestChain<currentScore){
                longestChain=currentScore;
            }
        }
        cout << n-longestChain << endl;
    }

    return 0;
}

int getLongChain(const int endPoint,const bool options[16]){
    int highest=0;
    for(int i=0;i<n;i++){
        if(options[i]){
            if(linkable[endPoint][i]){
                bool reduced[16];
                copy(options,options+16,reduced);
                reduced[i]=false;
                int score=1+getLongChain(i,reduced);
                if(highest<score){
                    highest=score;
                }
            }
        }
    }
    return highest;
}