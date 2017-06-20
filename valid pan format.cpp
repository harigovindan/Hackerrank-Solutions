#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        string a;
        cin>>a;int f=0;
        for(int i=0;i<5;i++)
            {
            if(a[i]>=65&&a[i]<=90)
                {
                f=0;
            }
            else
                {
                f=1;
                break;
            }
        }
        if(f==1)
            {
            cout<<"NO"<<endl;continue;
        }
        for(int i=5;i<9;i++)
            {
            if(a[i]>=48&&a[i]<=57)
                {
                f=0;
            }
            else
                {
                f=1;
            }
        }
        if(f==1)
            {
            cout<<"NO"<<endl;continue;
        }
        if(a[9]>=65&&a[9]<=90)
            {
            cout<<"YES"<<endl;
        }
        else
            {
            cout<<"NO"<<endl;
        }
    }
}

