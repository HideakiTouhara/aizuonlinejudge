#include<stdio.h>

int selectionSort(int A[], int N) {
    int minj, tmp, sw = 0;
    for(int i = 0; i < N; i++) {
        minj = i;
        for(int j = i; j < N; j++) {
            if(A[minj] > A[j]) {
                minj = j;
            }
        }
        tmp = A[i]; A[i] = A[minj]; A[minj] = tmp;
        if(minj != i) sw++;
    }
    return sw;
}

int main() {
    int A[100], N, sw;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);

    sw = selectionSort(A, N);

    for(int i = 0; i < N; i++) {
        if(i > 0) printf(" ");
        printf("%d", A[i]);
    }

    printf("\n");
    printf("%d\n", sw);

    return 0;
}