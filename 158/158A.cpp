#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    k--;

    int i=0;
    int count=0;
    int value;
    while(i<n){
        int temp;
        cin>>temp;
        if(temp>0){
            if(i<k){
                count++;
            }else if(i == k){
                value=temp;
                count++;
            }else if(temp == value){
                count++;
            }
        }
        i++;
    }

    cout << count << endl;


    return 0;
}