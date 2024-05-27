#include<iostream>
#include<cmath>
using namespace std;

inline float dist(float x1,float y1,float x2,float y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void solve(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    if(n%2){
        cout << "NO" << endl;
        return;
    }
    int north=0;
    int south=0;
    int west=0;
    int east=0;
    int rx=0,ry=0,hx=0,hy=0;
    for(int i=0;i<n;i++){
        switch(input[i]){
            case 'N':
                north++;
                break;
            case 'S':
                south++;
                break;
            case 'E':
                east++;
                break;
            case 'W':
                west++;
                break;
        }
    }
    if((north+south)%2 || (east+west)%2){
        cout << "NO" << endl;
        return;
    }
    if(n==2){
        if((north==2 || south==2 || east==2 || west==2)){
            cout << "RH" << endl;
        }else{
            cout << "NO" << endl;
        }
        return;
    }
    char nextTurn='R';
    float optionR,optionH;
    for(int i=0;i<n;i++){
        switch(input[i]){
            case 'N':
                optionR=dist(rx,ry+1,hx,hy);
                optionH=dist(rx,ry,hx,hy+1);
                if(optionH==optionR){
                    switch(nextTurn){
                        case 'R':
                            cout << 'R';
                            ry++;
                            nextTurn='H';
                            break;
                        case 'H':
                            cout << 'H';
                            hy++;
                            nextTurn='R';
                            break;
                    }
                }else if(optionH>optionR){
                    cout << 'R';
                    ry++;
                }else{
                    cout << 'H';
                    hy++;
                }
                break;
            case 'S':
                optionR=dist(rx,ry-1,hx,hy);
                optionH=dist(rx,ry,hx,hy-1);
                if(optionH==optionR){
                    switch(nextTurn){
                        case 'R':
                            cout << 'R';
                            ry--;
                            nextTurn='H';
                            break;
                        case 'H':
                            cout << 'H';
                            hy--;
                            nextTurn='R';
                            break;
                    }
                }else if(optionH>optionR){
                    cout << 'R';
                    ry--;
                }else{
                    cout << 'H';
                    hy--;
                }
                break;
            case 'E':
                optionR=dist(rx+1,ry,hx,hy);
                optionH=dist(rx,ry,hx+1,hy);
                if(optionH==optionR){
                    switch(nextTurn){
                        case 'R':
                            cout << 'R';
                            rx++;
                            nextTurn='H';
                            break;
                        case 'H':
                            cout << 'H';
                            hx++;
                            nextTurn='R';
                            break;
                    }
                }else if(optionH>optionR){
                    cout << 'R';
                    rx++;
                }else{
                    cout << 'H';
                    hx++;
                }
                break;
            case 'W':
                optionR=dist(rx-1,ry,hx,hy);
                optionH=dist(rx,ry,hx-1,hy);
                if(optionH==optionR){
                    switch(nextTurn){
                        case 'R':
                            cout << 'R';
                            rx--;
                            nextTurn='H';
                            break;
                        case 'H':
                            cout << 'H';
                            hx--;
                            nextTurn='R';
                            break;
                    }
                }else if(optionH>optionR){
                    cout << 'R';
                    rx--;
                }else{
                    cout << 'H';
                    hx--;
                }
                break;
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}