#include<iostream>
#include<vector>
#include<cstdint>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int most_problem_start=0;
    int most_problem_end=0;
    int most_problem_val=0;
    for(int i=0;i<n;i++){
        int cur_problem=0;
        int cur_end=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cur_problem++;
                cur_end=j;
                if(most_problem_val<cur_problem){
                    most_problem_val=cur_problem;
                    most_problem_start=i;
                    most_problem_end=cur_end;
                }
            }
            if(arr[i]<arr[j]) cur_problem--;
        }
    }
    cout << most_problem_start+1 << ' ' << most_problem_end+1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
}