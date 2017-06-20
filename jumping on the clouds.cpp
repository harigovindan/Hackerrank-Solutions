#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    while(i<n){
        if(a[i+2]==0){
            i+=2;c++;
        }
        else if(a[i+1]==0){
            i+=1;c++;
        }
        if(i==n-1){
            break;
        }
    }
    cout<<c<<endl;
}
