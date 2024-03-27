#include<iostream>
using namespace std;

int main(){
    int distance;
    cin >> distance;

    int steps=0;
    while(distance>=5){
        distance-=5;
        steps++;
    }
    while(distance>=4){
        distance-=4;
        steps++;
    }
    while(distance>=3){
        distance-=3;
        steps++;
    }
    while(distance>=2){
        distance-=2;
        steps++;
    }
    while(distance>=1){
        distance-=1;
        steps++;
    }
    cout << steps << endl;
    return 0;
}