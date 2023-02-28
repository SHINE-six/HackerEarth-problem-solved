#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int A[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int final = A[N-1] % 10;

    if (final == 0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}