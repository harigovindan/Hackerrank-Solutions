#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i;
    int n, a, b, t;
    int arr[1000] = { 0, };
 
    scanf("%d", &t);
 
    while (t--){
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);
 
        for (i = 0; i < n; i++){
            if (a == b){
                printf("%d", a*(n - 1));
                break;
            }
            else if (a>b)
                arr[i] = (b*(n - 1 - i)) + (a*i);
            
            else
                arr[i] = (a * (n - i - 1)) + (b*i);
            printf("%d ", arr[i]);
        }
 
        printf("\n");
    }
    return 0;
}

