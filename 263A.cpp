#include<iostream>
using namespace std;

int main(){
    int i=1;
    int answer;

    while(i<=5){
        int j=0;
        int arr[5];

        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

        if(arr[0]){
            j=1;
        }
        if(arr[1]){
            j=2;
        }
        if(arr[2]){
            j=3;
        }
        if(arr[3]){
            j=4;
        }
        if(arr[4]){
            j=5;
        }

        if(j!=0){
            answer = ((j>3) ? (j-3) : (3-j)) + ((i>3) ? (i-3) : (3-i));
        }

        i++;
    }

    cout << answer << endl;

    return 0;
}