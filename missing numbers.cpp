#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define SIZE 10001
using namespace std; 
int main() {
    int a[SIZE];
    for(int i = 0; i<SIZE;i++){
        a[i]=0;
    }
    int N, M;
    scanf("%d", &N);
    int temp;
    for(int n=0; n<N; n++){
        scanf("%d", &temp);
        a[temp]+=1;
    }
    scanf("%d", &M);
    for(int m =0; m<M; m++){
        scanf("%d", &temp);
        a[temp]-=1;
    }
    for(int i =0; i<SIZE; i++){
        if(a[i]<0) printf("%d ", i);
    }
    return 0;
}
