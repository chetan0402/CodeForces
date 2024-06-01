#include<iostream>
using namespace std;

int arr[200000];

void solve(){
    int n,k;
    cin >> n >> k;
    long long allSum=0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        allSum+=temp;
        arr[i]=temp;
    }
    long long highestSum=0;
    for(int i=0;i<n;i++){
        for(int ii=i;ii<n;ii++){
            long long currentSum=0;
            for(int j=i;j<=ii;j++){
                currentSum+=arr[j];
            }
            if(highestSum<currentSum)highestSum=currentSum;
        }
    }
    long long temp=(highestSum*((1<<k)-1)+allSum);
    while(temp>1000000007){
        temp-=1000000007;
    }
    if(temp<0){
        temp+=1000000007;
    }
    cout << temp << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--)solve();
    return 0;
}