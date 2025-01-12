#include<iostream>
#include<vector>
#include<map>
#include<set>
#define int long long
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    map<int,int> count;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        count[temp]++;
    }
    int mex=-1;
    int i=0;
    while(true){
        if(count.find(i)==count.end()){
            mex=i;
            break;
        }
        i++;
    }
    map<int,int>::iterator it=count.begin();
    set<int> dups;
    while(it!=count.end()){
        if(it->first > mex){
            it=next(it);
            continue;
        }
        if(it->second>1){
            dups.insert(it->first);
        }
        it=next(it);
    }
    bool solved=false;
    while(!solved){
        solved=true;
        set<int>::iterator it=dups.begin();
        while(it!=dups.end()){
            if((mex - *it)%x==0){
                solved=false;
                count[*it]--;
                count[mex]++;
                if(count[*it]==1) dups.erase(it);
                while(true){
                    if(count.find(i)==count.end()){
                        mex=i;
                        break;
                    }
                    i++;
                }
                break;
            }
            it=next(it);
        }
    }
    cout << mex << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}