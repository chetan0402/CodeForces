#include<iostream>
#include<vector>
using namespace std;

int table(vector<int>& weights,vector<int>&profit, int object, int totalWeight) {
    if(object==-1 || totalWeight==0) return 0;
    int currentWeight=weights[object];
    int temp=table(weights,profit, object - 1, totalWeight);
    if (totalWeight - currentWeight < 0) {
        return temp;
    }else{
        return max(temp,table(weights,profit,object-1,totalWeight-currentWeight)+profit[object]);
    }
}

void solve(){
    int months,salary;
    cin >> months >> salary;
    vector<int> cost(months);
    vector<int> happi(months);
    for(int i=0;i<months;i++){
        cin >> cost[i] >> happi[i];
    }
    cout << table(cost,happi,months-1,salary*months) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}