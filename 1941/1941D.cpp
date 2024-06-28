#include<iostream>
#include<vector>
#include<set>
#define int long long
using namespace std;

int throwClockwise(int start,int distance,int n){
    if((start+distance)%n == 0) return n;
    else return (start+distance)%n;
}

int throwAntiClockwise(int start,int distance,int n){
    distance=distance%n;
    if(start-distance>0) return start-distance;
    return start-distance+n;
}

void solve(){
    int n,m,x;
    cin >> n >> m >> x;
    set<int> pos={x};
    while(m--){
        int dist;
        char direction;
        cin >> dist >> direction;
        set<int>::iterator it=pos.begin();
        set<int> temp;
        switch(direction){
            case '0':
                while(it!=pos.end()){
                    temp.insert(throwClockwise(*it,dist,n));
                    it=next(it);
                }
                break;
            case '1':
                while(it!=pos.end()){
                    temp.insert(throwAntiClockwise(*it,dist,n));
                    it=next(it);
                }
                break;
            case '?':
                while(it!=pos.end()){
                    temp.insert(throwClockwise(*it,dist,n));
                    temp.insert(throwAntiClockwise(*it,dist,n));
                    it=next(it);
                }
        }
        pos=temp;
    }
    cout << pos.size() << endl;
    set<int>::iterator it=pos.begin();
    while(it!=pos.end()){
        cout << *it << " ";
        it=next(it);
    }
    cout << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)solve();
}