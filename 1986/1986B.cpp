#include<iostream>
#include<vector>
#define int long long
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> arr[i][j];
    bool finished=false;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        const int currentValue=arr[i][j];
        int flags=0;
        int maxVal=-1;
        if(i==0)flags++;
        else if(arr[i-1][j]<currentValue)flags++,maxVal=max(arr[i-1][j],maxVal);
        if(j==0)flags++;
        else if(arr[i][j-1]<currentValue)flags++,maxVal=max(arr[i][j-1],maxVal);
        if(i==n-1)flags++;
        else if(arr[i+1][j]<currentValue)flags++,maxVal=max(arr[i+1][j],maxVal);
        if(j==m-1)flags++;
        else if(arr[i][j+1]<currentValue)flags++,maxVal=max(arr[i][j+1],maxVal);

        if(flags==4){
            arr[i][j]=maxVal;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}