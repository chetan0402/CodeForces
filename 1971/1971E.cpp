#include<iostream>
#include<vector>
using namespace std;

void solve(){
    long long dest,numOfPoints,query;
    cin >> dest >> numOfPoints >> query;
    vector<long long> distance(numOfPoints);
    for(int i=0;i<numOfPoints;i++){
        cin >> distance[i];
    }
    vector<long long> time(numOfPoints);
    for(int i=0;i<numOfPoints;i++){
        cin >> time[i];
    }
    while(query--){
        long long findDis;
        cin >> findDis;
        int lowIndex=0;
        int highIndex=numOfPoints-1;
        int i=0;
        bool found=false;
        while(lowIndex<=highIndex){
            int mid=(highIndex-lowIndex)/2 +lowIndex;
            if(distance[mid]>findDis){
                highIndex=mid-1;
            }else if(distance[mid]<findDis){
                lowIndex=mid+1;
            }else{
                i=mid;
                break;
            }
            i=lowIndex;
        }
        if(i==0){
            cout << time[0]*findDis/distance[0] << " ";
            continue;
        }
        cout << time[i-1] + (time[i]-time[i-1])*(findDis-distance[i-1])/(distance[i]-distance[i-1]) << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
}