#include<iostream>
#include<vector>
#include<unordered_set>
#define int long long
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
    
    int maxVal=arr[0][0];
    vector<int> row(n,0);
    vector<int> col(m,0);
    int count=0;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        if(maxVal==arr[i][j]){
            row[i]++;
            col[j]++;
            count++;
        }
        else if(arr[i][j]>maxVal){
            maxVal=arr[i][j];
            row.assign(n,0);
            col.assign(m,0);
            row[i]++;
            col[j]++;
            count=1;
        }
    }

    int targetRow=0;
    int targetCol=0;
    int targetScore=0;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        int score=row[i]+col[j];
        if(arr[i][j]==maxVal) score--;
        if(score>targetScore){
            targetScore=score;
            targetRow=i;
            targetCol=j;
        }
    }

    if(targetScore==count) cout << maxVal-1 << endl;
    else cout << maxVal << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}