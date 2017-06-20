#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[10010];
int h[20020];
int main(int argc, char *argv[]) {
    int n, d;
    scanf("%d%d", &n, &d);

    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]);
        h[arr[i]] = 1;
    }

    int count = 0;
    for(int j = 1; j < n - 1; j++) {
        int v = arr[j];
        if(v - d >= 0 && v + d < 20020 && h[v-d] == 1 && h[v + d] == 1) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}


