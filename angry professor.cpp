#include <stdio.h>
 
int main(){
    int T; // the number of test cases 1 <= T <= 10
    int N, K; // 1 <= N <= 1000, N is the number of the students, 1 <= K <= N, K is the number of students present after the class starts
    int a[1000]; // if a <= 0 : the student enters before the class starts, a > 0 : the student enters after the class has started.
 
    int i, j;
 
    scanf("%d", &T);
 
    for (i = 0; i < T; i++){
        scanf("%d %d", &N, &K);
        for (j = 0; j < N; j++){
            scanf("%d", &a[j]);
            
            if (a[j] <= 0){
                K--;
            }
        }
 
        if (K <= 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
