#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector <int> vi;
#define MAX 10000

int main() {
  // freopen("in.in", "r", stdin);

  int cases;scanf("%d",&cases);
  while(cases--) {
    int n, current_max, max_contiguous_sum, max_sum;
    max_sum = 0;
    current_max = max_contiguous_sum = (-1 * MAX);
    scanf("%d",&n);
    for (int a, i = 0; i < n; ++i) {
      scanf("%d",&a);
      current_max = max(a,current_max + a);
      max_contiguous_sum = max(current_max,max_contiguous_sum);
      if (a>0){
        max_sum += a;
      }
    }
    if (max_contiguous_sum < 0)
      max_sum = max_contiguous_sum;
    printf("%d %d\n",max_contiguous_sum, max_sum);
  }
  return 0;
}
