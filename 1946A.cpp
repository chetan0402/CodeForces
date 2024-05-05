#include<iostream>
#include<algorithm>
using namespace std;

int arr[100000];
int n;
int med;

void solve(){
    cin >> n;
    med=(n + 1) / 2 - 1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    std::sort(arr,arr+n);
    const int originalMed=arr[med];
    int numberOfChange=0;
    for(int i=med;i<n;i++){
        if(originalMed==arr[i]){
            numberOfChange++;
        }else{
            break;
        }
    }
    cout << numberOfChange << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--)solve();
    return 0;
}