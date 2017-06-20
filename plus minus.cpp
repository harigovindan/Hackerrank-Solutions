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
    float p=0.000,ne=0.000,z=0.000;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            {
            ne++;
        }
        else if(a[i]>0)
            {
            p++;
            }
        else if(a[i]==0)
            {
            z++;
        }
    }
    printf("%3f\n%3f\n%3f",p/n,ne/n,z/n);
    
}

