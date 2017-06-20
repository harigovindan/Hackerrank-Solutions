#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int s=0,i=0;
    while(s<=k)
    {
        s+=a[i];
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}


