#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int rev(int m){
    int r=0,rem;
    while(m != 0)
    {
        rem = m%10;
        r = r*10 + rem;
        m /= 10;
    }
    return r;
}

int main() {
    int i,j,re,c=0;
    long int k;
    cin>>i>>j>>k;
    for(int s=i; s<=j; s++){
      double x= (s-rev(s))/double(k);
        if(floor(x) == x)
            c++;
    }
    cout<<c;
    return 0;
}
