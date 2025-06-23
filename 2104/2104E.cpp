#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    string arr;cin>>arr;
    int q;cin>>q;

    vector<int> nextOption(n+1);
    nextOption[n]=INT_MAX;
    vector<int> temp(k,INT_MAX);
    for(int i=n-1;i>=0;i--){
        nextOption[i]=*max_element(temp.begin(),temp.end());
        int c=arr[i]-'a';
        temp[c]=min(temp[c],i);
    }

    while(q--){
        string substr;cin>>substr;
        int ptrMain=0;
        int ptrSubtr=0;
        while(ptrMain<n && ptrSubtr<substr.size()){
            if(arr[ptrMain]==substr[ptrSubtr]) ptrSubtr++;
            ptrMain++;
        }
        ptrMain--;
        if(ptrSubtr<substr.size()){
            cout << 0 << endl;
            continue;
        }

        int addition=0;
        while(ptrMain<=n){
            addition++;
            ptrMain=nextOption[ptrMain];
        }
        cout << addition << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}