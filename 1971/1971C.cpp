#include<iostream>
using namespace std;

inline bool isInTop(int largerPoint,int smallerPoint,int findPoint){
    return (findPoint>largerPoint || findPoint<smallerPoint);
}

inline bool isInBottom(int largerPoint,int smallerPoint,int findPoint){
    return (findPoint<largerPoint && findPoint>smallerPoint);
}

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int larger=max(a,b);
    int smaller=min(a,b);
    a=larger;
    b=smaller;
    if((isInTop(a,b,c) && isInTop(a,b,d)) || (isInBottom(a,b,d) && isInBottom(a,b,c))){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}