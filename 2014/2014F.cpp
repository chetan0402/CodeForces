#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define int long long
using namespace std;

map<int,vector<int>> edges;
int n,c;

void insertInEdge(int key,int value){
    map<int,vector<int>>::iterator it=edges.find(key);
    if(it==edges.end()){
        vector<int> arr;
        arr.push_back(value);
        edges[key]=arr;
    }else{
        it->second.push_back(value);
    }
}

int recur(int gold[],int i,bool strength,bool done[]){
    if(i==n){
        int result=0;
        for(int i=0;i<n;i++){
            if(done[i]){
                result+=gold[i];
            }
        }
        return result;
    }
    if(strength){
        map<int,vector<int>>::iterator it=edges.find(i+1);
        if(it!=edges.end()){
            bool can=true;
            for(int to_camp:it->second){
                if(gold[to_camp-1]<c){
                    can=false;
                    break;
                }
            }
            if(can){
                int*arr=new int[n];
                bool*arrDone=new bool[n];
                copy(gold,gold+n,arr);
                copy(done,done+n,arrDone);
                for(int to_camp:it->second){
                    arr[to_camp-1]-=c;
                    arrDone[i]=true;
                }
                return max(recur(arr,i+1,false,arrDone),recur(arr,i+1,true,arrDone));
            }
        }
        return max(recur(gold,i+1,false,done),recur(gold,i+1,true,done));
    }else return max(recur(gold,i+1,false,done),recur(gold,i+1,true,done));
}

void solve(){
    cin >> n >> c;
    int*gold=new int[n];
    for(int i=0;i<n;i++){
        cin >> gold[i];
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        cin >> u >> v;
        insertInEdge(u,v);
        insertInEdge(v,u);
    }
    bool*done=new bool[n];
    for(int i=0;i<n;i++) done[i]=false;
    cout << max(recur(gold,0,true,done),recur(gold,0,false,done)) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}