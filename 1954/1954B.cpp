#include<iostream>
#include<vector>
using namespace std;

vector<int> arr;

int safeComp(int index1,int index2){
    if(index1>=arr.size() || index2>=arr.size()){
        return 0;
    }
    return arr[index1]==arr[index2];
}

void solve(){
    int n;
    cin >> n;
    arr.clear();

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    if(n<3){
        cout << -1 << endl;
        return;
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(safeComp(i-1,i+1) && !safeComp(i,i+2) && !safeComp(i-1,i)){
            int index;
            if(i-1 <= n-i-2){
                index=i-1;
            }else{
                index=i+1;
            }
            arr.erase(arr.begin()+index);
            n--;
            count++;
            i-=2;
        }
    }
    if(count==0)count=-1;
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}