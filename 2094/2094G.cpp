#include<iostream>
#include<vector>
#include<queue>
#define int long long
using namespace std;

void solve(){
    int q;cin>>q;
    deque<int> arr;
    deque<int> rev;
    int cur=0;
    int sum=0;
    int curRev=0;
    while(q--){
        int option;cin>>option;
        if(option==1){
            auto end=arr.back();
            arr.pop_back();
            arr.push_front(end);
            cur+=sum;
            cur-=end*arr.size();
            // rev
            auto front=rev.front();
            rev.pop_front();
            rev.push_back(front);
            curRev-=sum;
            curRev+=front*arr.size();
        }else if(option==2){
            swap(arr,rev);
            swap(cur,curRev);
        }else{
            int num;cin>>num;
            // normal
            arr.push_back(num);
            cur+=num*arr.size();
            // rev
            rev.push_front(num);
            curRev+=sum;
            curRev+=num;

            sum+=num;
        }
        cout << cur << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}