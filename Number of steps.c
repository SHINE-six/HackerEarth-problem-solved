#include <stdio.h>
//unfinished

int main(){
    int n;
    scanf("%d",&n);
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    char run = 'f';

    for (int x = 0; x < (n-1); x++)
    {
        if (a[x] != a[x+1])
        {
            run = 't';
        }
    }
    
    int small = a[0];
    int diff;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small){
            small = a[i];
        }
    }
    int total = 0;
    int impossibled = (a[0] - small) % b[0];
    int impossible;
    for (int i = 0; i < n; i++)
    {
       diff = a[i] - small;
       impossible = diff % b[i];
       diff /= b[i];
       
       total += diff;
       if (impossible != impossibled)
       {
            printf("%d",-1);
            break;
       }
    }
    if (impossible == impossibled)
    {
        printf("%d",total);
    }
    
    

    
    
    return 0;
}