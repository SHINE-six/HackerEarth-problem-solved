#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int green, purple;
        scanf("%d %d",&green, &purple);   
        int participant;
        scanf("%d",&participant);
        
        int cost = 0;

        int number_first_test = 0;
        int number_second_test = 0;
        for (int x = 0; x < participant; x++)
        {
            int first_test, second_test;
            scanf("%d %d",&first_test, &second_test);
            number_first_test += first_test;
            number_second_test += second_test;
        }
        int cost1 = (number_first_test * green) + (number_second_test * purple);
        int cost2 = (number_first_test * purple) + (number_second_test * green);
        if (cost1 < cost2)
        {
            cost = cost1;
        }
        else
        {
            cost = cost2;
        }
        printf("%d\n",cost);
    }

return 0;
}