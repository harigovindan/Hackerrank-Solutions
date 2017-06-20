#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n],sum=0,sum1=0;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            if(i==j)
                {
                sum+=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            if(i+j+1==n)
                {
                sum1+=a[i][j];
            }
        }
    }
    
    int res=sum-sum1;
    if(res<0)
        {
        cout<<(-1*res);
    }
    else
        {
        cout<<res;
    }
}


