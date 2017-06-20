#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    int b[6]={0};
    for(int i=0;i<n;i++)
        {
        b[a[i]]+=1;
    }
    int max=b[0],maxi=0;
    for(int i=1;i<=5;i++)
        {
        if(b[i]>max){max=b[i];maxi=i;}
    }
    cout<<maxi<<endl;
    return 0;
}

