#include<iostream>
using namespace std;

int main(){
    int times;
    cin >> times;

    for(int time=0;time<times;time++){
        int a,b,c;
        cin >> a >> b >> c;

        if(a+1!=c){
            cout << -1 << endl;
            continue;
        }
        if(a+b+c == 1){cout << 0 << endl;continue;}
        if(a>0){
            a-=1;
            int edge=2;
            int height=1;
            while(a+b>0){
                int updateEdge=0;
                for(int i=0;i<edge;i++){
                    if(a>0){
                        a-=1;
                        updateEdge+=1;
                    }else if(b>0){
                        b-=1;
                    }
                }
                edge+=updateEdge;
                height+=1;
            }
            cout << height << endl;
        }else{
            cout << b << endl;
        }
    }
    return 0;
}