//Left Sum and Right Sum

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    long long A[N];
    long long totalSum = 0;

    
    for(int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        totalSum += A[i];
    }

    long long leftSum = 0;

    for(int i = 0; i < N; i++) {
        long long rightSum = totalSum - leftSum - A[i];
        long long diff = llabs(leftSum - rightSum);
        printf("%lld ", diff);
        leftSum += A[i];
    }

    return 0;
}