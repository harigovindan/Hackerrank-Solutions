#include <stdio.h>

int main() {
    int N, i;
    long long A, B, answer;
    scanf("%d", &N);
    while (N--) {
        scanf("%lld%lld", &A, &B);
        answer = 0;
        for (i = 0; i < 32; ++i) {
            long long k = (A + (1ll << i)) >> i;
            long long P = (k << i) - 1;
            if (P >= B) {
                if ((k & 1) == 0) answer |= 1ll << i;
            }
        }
        printf("%lld\n", answer);
    }
    return 0;
}
