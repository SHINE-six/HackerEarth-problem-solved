#include <stdio.h>

int main(){
    int Test_case;
    scanf("%d",&Test_case);
    int matches_needed[10] = {6,2,5,5,4,5,6,3,7,6};

    for (int i = 0; i < Test_case; i++)
    {
        int total_match = 0;
        int input_number;
        scanf("%d",&input_number);

        int match[105];

        for (int i = 0; i < 105; i++)
        {
            match[i] = input_number%10;
            input_number = input_number/10;
            match[i] = matches_needed[match[i]];
            total_match += match[i];
            
            if (input_number == 0){
                break;
            }
        }
        printf("total match :%d\n",total_match);

        int output[300];
        int x;
        for (x = 0; x < 300; x++)
        {
            if (total_match/2 > total_match/3)
            {
                total_match -= 2;
                output[x] = 1;
            }   
            else if (total_match/2 <= total_match/3)
            {
                total_match -= 3;
                output[x] = 7;
            }
            if (total_match == 1 || total_match == 0)
            {
                break;
            }
        }
        for (int q = x ; q >= 0; q--)
        {
            printf("%d",output[q]);        
        }
		printf("\n");

    }

    return 0;
}