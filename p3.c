//Leonardo Assis Gaspar
//11811EAU015

#include <stdio.h>

int main ()
{

	char s[256];
	int num[256], x = 0, j, i;
	printf("Digite uma sequencia desejada : ");
	scanf("%s", s);	
	for(i = 0; s[i] != '\0'; i++) 
		if(s[i] >= 48 && s[i] <= 57) 
		{	
			num[x] = s[i] - 48; 
			x++;	
		}
	
	for(j = 0; j < x; j++) 
	printf("%d", num[j]); 
	return 0;
}

