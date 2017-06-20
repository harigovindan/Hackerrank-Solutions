#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0,i=0;
    while(i<n)
        {
        if(a[i]==a[i+1])
            {
            c++;i+=2;
        }
        else{
            i++;
        }
    }
    cout<<c<<endl;
    return 0;
}

