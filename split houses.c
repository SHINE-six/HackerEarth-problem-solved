#include <stdio.h>

int main(){
    int n;
    char possible = 't';
    scanf("%d",&n);
    char grid[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&grid[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (grid[i] == 'H' && grid[i+1] == 'H')
        {
            printf("NO");
            possible = 'f';
            break;
        }
        else if (grid[i] == '.')
        {
            grid[i] = 'B';
        }
    }
    if (possible == 't')
    {
        printf("YES\n");
        for (int i = 0; i < n; i++)
        {
            printf("%c",grid[i]);
        }
    }
    
    
    
    

    return 0;
}