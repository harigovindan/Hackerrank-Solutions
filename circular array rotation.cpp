#include <bits/stdc++.h>
using namespace std;
int main() {
 int n,k,q,a,m;
 vector<int>ar;
 scanf("%d %d %d",&n,&k,&q);
 for(int i = 0; i < n; i++){
        scanf("%d",&a);
        ar.push_back(a);
 }
 k%=n;
 for(int i = 0; i < q; i++){
        scanf("%d",&m);
        if(m-k >= 0)printf("%d\n",ar[m-k]);
        else printf("%d\n",ar[m-k+n]);
 }
 return 0;
}
