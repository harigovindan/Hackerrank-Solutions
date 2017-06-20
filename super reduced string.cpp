#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a;
    getline(cin,a);
    start:
    for(int i=0;i<a.length();i++)
        {
        if(a[i]==a[i+1])
            {
            a.erase(i,2);
            goto start;
        }
    }
    a.length()==0 ? cout<<"Empty String" : cout<<a<<endl;
    return 0;
}

