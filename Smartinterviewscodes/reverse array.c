//reverse array
#include <stdio.h>

void printReverse(int arr[], int n) {
    if(n == 0) return;              
    printf("%d ", arr[n - 1]);      
    printReverse(arr, n - 1);       
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[100];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, N);

    return 0;
}
