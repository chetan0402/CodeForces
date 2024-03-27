#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;

    int answer=(((w*(w+1))/2)*k)-n;

    cout << ((answer>0)?(answer):(0));

    return 0;
}