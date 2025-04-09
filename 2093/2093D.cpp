#include<iostream>
#include<vector>
#include<cmath>
#define int long long
using namespace std;

int startNum(int offsetStart,int n,int localOrder){ // Input localorder in 0,1,2,3 instead
    return offsetStart+n*n*localOrder/4;
}

void solve(){
    int n,q;cin>>n>>q;
    while(q--){
        string query;cin>>query;
        if(query=="->"){
            // What number at that place
            // 1+2^n(1-i), where i is the local order, 1,2,3,4, ans will give the starting number of that seq
            int row,col;cin>>row>>col;
            int tempN=(1<<n);
            int offsetStart=1;
            while(tempN!=1){
                bool top=(row<=tempN/2);
                bool left=(col<=tempN/2);
                if(top && left){
                    offsetStart=startNum(offsetStart,tempN,0);
                    tempN/=2;
                }else if(top && !left){
                    offsetStart=startNum(offsetStart,tempN,3);
                    col-=tempN/2;
                    tempN/=2;
                }else if(!top && left){
                    offsetStart=startNum(offsetStart,tempN,2);
                    row-=tempN/2;
                    tempN/=2;
                }else{
                    offsetStart=startNum(offsetStart,tempN,1);
                    row-=tempN/2;
                    col-=tempN/2;
                    tempN/=2;
                }
            }
            cout << offsetStart << endl;
        }else{
            int num;cin>>num;
            int offsetStart=1;
            int tempN=(1<<n);
            int startRow=1;
            int startCol=1;
            while(tempN!=1){
                int bottomRightStart=startNum(offsetStart,tempN,1);
                int bottomLeftStart=startNum(offsetStart,tempN,2);
                int topRightStart=startNum(offsetStart,tempN,3);
                if(num<bottomRightStart){
                    offsetStart=startNum(offsetStart,tempN,0);
                    tempN/=2;
                }else if(num<bottomLeftStart){
                    offsetStart=bottomRightStart;
                    startRow+=(tempN/2);
                    startCol+=(tempN/2);
                    tempN/=2;
                }else if(num<topRightStart){
                    offsetStart=bottomLeftStart;
                    startRow+=(tempN/2);
                    tempN/=2;
                }else{
                    offsetStart=topRightStart;
                    startCol+=(tempN/2);
                    tempN/=2;
                }
            }
            cout << startRow << " " << startCol << endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}