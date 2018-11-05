//Leonardo Assis Gaspar
//11811EAU015

#include <stdio.h>

int main()
{
	int estado = 0, i;
	char bits[256];
	printf("Digite a sequencia desejada: ");
	fflush(stdin);
	scanf("%s", bits);
	for(i = 0; bits[i] != '\0'; i++)
	{
		for(i = 0; bits[i] != '\0'; i++)
		{
			if(estado == 0 && bits[i] == '0');
			else if(estado == 0 && bits[i] == '1')
				{
					estado = 1;
				}
			else if(estado == 1 && bits[i] == '0')
				{
					estado = 2;	
				}
			else if(estado == 1 && bits[i] == '1')
				{
					estado = 0;
				}
			else if(estado == 2 && bits[i] == '0')
				{
					estado = 1;	
				}
			else if(estado == 2 && bits[i] == '1');
		}
	}
	if (estado == 0)
	{
		printf("O estado final foi: %i\n", estado);
		printf("%s e uma sequencia multipla de 3.", bits);
	}
	else
	{
		printf("O estado final foi: %i\n", estado);
		printf("%s nao e uma sequencia multipla de 3.", bits);
	}
	return 0;
}
