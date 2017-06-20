#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
int main() {
    int t, n, a[100001], l, r, min;
    scanf("%d%d", &n, &t);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    while(t--) {
        min=INT_MAX;
        scanf("%d%d", &l, &r);
        for(int i=l; i<=r; i++) if(a[i]<min) min=a[i];
        printf("%d\n", min);
    }
    return 0;
}
