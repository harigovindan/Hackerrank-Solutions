#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    int maxc=0,minc=0;
    for(int i=1;i<n;i++)
        {
        if(a[i]>max){
            max=a[i];maxc++;
        }
        else if(a[i]<min){
            min=a[i];minc++;
            //cout<<min<<" ";
        }
    }
    cout<<maxc<<" "<<minc<<endl;
    return 0;
}

