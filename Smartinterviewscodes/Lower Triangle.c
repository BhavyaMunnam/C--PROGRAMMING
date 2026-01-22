//Lower Triangle
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0;
    int x;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &x);
            if(i >= j) {
                sum += x;
            }
        }
    }

    printf("%lld", sum);
    return 0;
}
