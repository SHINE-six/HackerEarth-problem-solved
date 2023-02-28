#include <stdio.h>

int main(){
	char ch[50];
	int zcount = 0;
    int ocount = 0;
	scanf("%s", ch);
    printf("strlen: %d\n",strlen(ch));

    int i = 0;
	while (ch[i] != 'o')
	{
        i++;
		zcount++;
		
	}
	ocount = strlen(ch) - zcount;

	if (ocount*2 == zcount)
	{
		printf("Yes");
	}
	else
	{
		printf("NO");
	}
}
