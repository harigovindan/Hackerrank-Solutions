#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,k,j,x,ans,page,i;

int main() {
    page = 1;
    
    scanf("%d%d",&n,&k);
    for (i=1 ; i<=n ; i++) {
        scanf("%d",&x);
        for (j=1 ; j<=x ; j++) {
            if (page == j) ans++;
            if (j % k == 0) page++;
        }
        if (x % k != 0) page++;
        //printf("%d\n",page);
    }
    printf("%d\n",ans);
    return 0;
}
