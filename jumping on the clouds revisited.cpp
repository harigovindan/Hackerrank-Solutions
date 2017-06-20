#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
int n;
int k;
int e = 101;
cin >> n >> k;
vector<int> c(n);
for(int c_i = 0;c_i < n;c_i++){
   cin >> c[c_i];
}
for(int i = n/k; i >= 0; i--){
    if(c[k*i] == 1){
        e = e-2;
    }
    e = e-1;
}
cout << e;
return 0;
}
