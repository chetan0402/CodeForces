#include<iostream>
using namespace std;

void solve(){
    int totalParts,colors,bobPaint;
    cin >> totalParts >> colors >> bobPaint;
    int mostPresent=totalParts/colors;
    if(totalParts%colors!=0){
        mostPresent++;
    }
    if(bobPaint<(totalParts-mostPresent)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}