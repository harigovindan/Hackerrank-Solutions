#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=1;
    while(j<=n){
        int pos=0;
    for(int i=0;i<n;i++){
        if(j==a[i]){
            pos=i+1;
            break;
        }
    }
        for(int i=0;i<n;i++){
            if(pos==a[i]){
                cout<<i+1<<endl;
                break;
            }
        }
        j++;
    }
}
