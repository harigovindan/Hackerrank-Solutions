#include <bits/stdc++.h>

using namespace std;


int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int alice=0,bob=0;
    if(a0>b0){alice++;}else if(b0>a0){bob++;}
    if(a1>b1){alice++;}else if(b1>a1){bob++;}
    if(a2>b2){alice++;}else if(b2>a2){bob++;}
    cout<<alice<<" "<<bob;
    

    return 0;
}

