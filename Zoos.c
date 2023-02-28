#include <stdio.h>

int main(){
	char ch[50];
	int zcount = 0;
    int ocount = 0;
	scanf("%s", ch);

    int i = 0;
	while (ch[i] != 'o')
	{
        i++;
		zcount++;
		
	}
	ocount = strlen(ch) - zcount;
	if (zcount*2 == ocount)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
