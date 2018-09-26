//Leonardo Assis Gaspar
//11811EAU015

#include <stdio.h>

int main ()
{
	int op, decimal = 0, i, j, aux;
	char bits[256];
	printf("Escolha uma opcao:\n\n1 - Binario para Decimal\n2 - Binario para Hexadecimal\n3 - Hexadecimal para Decimal\n4 - Hexadecimal para Binario");
	printf("\n5 - Decimal para Binario\n6 - Decimal para Hexadecimal\n7 - Octal para Decimal\n8 - Decimal para Octal\n\n");
	scanf("%i", &op);
	switch(op)
	{
		case 1:
			printf("\nDigite um binario: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			for(j = 1; i >= 0; i--, j = j * 2)
			{
				if(bits[i] == '1')
				{
					decimal = decimal + j;
				}
			}
			printf("\n%i", decimal/2);
			break;
		case 2:
			printf("\nDigite um binario: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			for(j = 1; i >= 0; i--, j = j * 2)
			{
				if(bits[i] == '1')
				{
					decimal = decimal + j;
				}
			}
			decimal = decimal/2;
			for (i = 0, j = 1; j < decimal; i++, j = j*16);
			j = j/16;
			aux = i;
			bits[i] = '\0';
			i--;
			while(i >= 0)
			{
				if(decimal % 16 == 0)
				{
					bits[i] = '0';
				}
				else if(decimal % 16 == 1)
				{
					bits[i] = '1';
				}
				else if(decimal % 16 == 2)
				{
					bits[i] = '2';
				}
				else if(decimal % 16 == 3)
				{
					bits[i] = '3';
				}
				else if(decimal % 16 == 4)
				{
					bits[i] = '4';
				}
				else if(decimal % 16 == 5)
				{
					bits[i] = '5';
				}
				else if(decimal % 16 == 6)
				{
					bits[i] = '6';
				}
				else if(decimal % 16 == 7)
				{
					bits[i] = '7';
				}
				else if(decimal % 16 == 8)
				{
					bits[i] = '8';
				}
				else if(decimal % 16 == 9)
				{
					bits[i] = '9';
				}
				else if(decimal % 16 == 10)
				{
					bits[i] = 'A';
				}
				else if(decimal % 16 == 11)
				{
					bits[i] = 'B';
				}
				else if(decimal % 16 == 12)
				{
					bits[i] = 'C';
				}
				else if(decimal % 16 == 13)
				{
					bits[i] = 'D';
				}
				else if(decimal % 16 == 14)
				{
					bits[i] = 'E';
				}
				else if(decimal % 16 == 15)
				{
					bits[i] = 'F';
				}
				decimal = decimal/16;
				i--;
				j = j/16;
			}
				printf("\n%s", bits);
			break;
		case 3:
			printf("\nDigite um hexadecimal: ");
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++)
			{
				if (bits[i] == 'A' || bits[i] == 'a')
				{
					bits[i] = 10;
				}
				else if (bits[i] == 'B' || bits[i] == 'b')
				{
					bits[i] = 11;
				}
				else if (bits[i] == 'C' || bits[i] == 'c')
				{
					bits[i] = 12;
				}
				else if (bits[i] == 'D' || bits[i] == 'd')
				{
					bits[i] = 13;
				}
				else if (bits[i] == 'E' || bits[i] == 'e')
				{
					bits[i] = 14;
				}
				else if (bits[i] == 'F' || bits[i] == 'f')
				{
					bits[i] = 15;
				}
				else if (bits[i] == '0')
				{
					bits[i] = 0;
				}
				else if (bits[i] == '1')
				{
					bits[i] = 1;
				}
				else if (bits[i] == '2')
				{
					bits[i] = 2;
				}
				else if (bits[i] == '3')
				{
					bits[i] = 3;
				}
				else if (bits[i] == '4')
				{
					bits[i] = 4;
				}
				else if (bits[i] == '5')
				{
					bits[i] = 5;
				}
				else if (bits[i] == '6')
				{
					bits[i] = 6;
				}
				else if (bits[i] == '7')
				{
					bits[i] = 7;
				}
				else if (bits[i] == '8')
				{
					bits[i] = 8;
				}
				else if (bits[i] == '9')
				{
					bits[i] = 9;
				}	
			}
			i--;
			for(j = 1; i >= 0; i--, j = j * 16)
			{
				decimal = decimal + j * bits[i];
			}
			printf("\n%d", decimal);
			break;
		case 4:
			printf("\nDigite um hexadecimal: ");
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++)
			{
				if (bits[i] == 'A' || bits[i] == 'a')
				{
					bits[i] = 10;
				}
				else if (bits[i] == 'B' || bits[i] == 'b')
				{
					bits[i] = 11;
				}
				else if (bits[i] == 'C' || bits[i] == 'c')
				{
					bits[i] = 12;
				}
				else if (bits[i] == 'D' || bits[i] == 'd')
				{
					bits[i] = 13;
				}
				else if (bits[i] == 'E' || bits[i] == 'e')
				{
					bits[i] = 14;
				}
				else if (bits[i] == 'F' || bits[i] == 'f')
				{
					bits[i] = 15;
				}
				else if (bits[i] == '0')
				{
					bits[i] = 0;
				}
				else if (bits[i] == '1')
				{
					bits[i] = 1;
				}
				else if (bits[i] == '2')
				{
					bits[i] = 2;
				}
				else if (bits[i] == '3')
				{
					bits[i] = 3;
				}
				else if (bits[i] == '4')
				{
					bits[i] = 4;
				}
				else if (bits[i] == '5')
				{
					bits[i] = 5;
				}
				else if (bits[i] == '6')
				{
					bits[i] = 6;
				}
				else if (bits[i] == '7')
				{
					bits[i] = 7;
				}
				else if (bits[i] == '8')
				{
					bits[i] = 8;
				}
				else if (bits[i] == '9')
				{
					bits[i] = 9;
				}	
			}
			i--;
			for(j = 1; i >= 0; i--, j = j * 16)
			{
				decimal = decimal + j * bits[i];
			}
			for (i = 0, j = 1; j < decimal; i++, j = j*2);
			j = j/2;
			aux = i;
			while(i >= 0)
			{
				if(decimal % 2 == 0)
				{
					bits[i] = 0;
				}
				else
				{
					bits[i] = 1;
				}
				decimal = decimal /2;
				i--;
				j = j/2;
			}
			printf("\n");
			for(i = 1; i <= aux; i++)
			{
				printf("%i", bits[i]);
			}
			break;
		case 5:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &decimal);
			getchar();
			for (i = 0, j = 1; j < decimal; i++, j = j*2);
			j = j/2;
			aux = i;
			while(i >= 0)
			{
				if(decimal % 2 == 0)
				{
					bits[i] = 0;
				}
				else
				{
					bits[i] = 1;
				}
				decimal = decimal /2;
				i--;
				j = j/2;
			}
			printf("\n");
			for(i = 1; i <= aux; i++)
			{
				printf("%i", bits[i]);
			}
			break;
		case 6:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &decimal);
			getchar();
			for (i = 0, j = 1; j < decimal; i++, j = j*16);
			j = j/16;
			aux = i;
			i--;
			while(i >= 0)
			{
				if(decimal % 16 == 0)
				{
					bits[i] = '0';
				}
				else if(decimal % 16 == 1)
				{
					bits[i] = '1';
				}
				else if(decimal % 16 == 2)
				{
					bits[i] = '2';
				}
				else if(decimal % 16 == 3)
				{
					bits[i] = '3';
				}
				else if(decimal % 16 == 4)
				{
					bits[i] = '4';
				}
				else if(decimal % 16 == 5)
				{
					bits[i] = '5';
				}
				else if(decimal % 16 == 6)
				{
					bits[i] = '6';
				}
				else if(decimal % 16 == 7)
				{
					bits[i] = '7';
				}
				else if(decimal % 16 == 8)
				{
					bits[i] = '8';
				}
				else if(decimal % 16 == 9)
				{
					bits[i] = '9';
				}
				else if(decimal % 16 == 10)
				{
					bits[i] = 'A';
				}
				else if(decimal % 16 == 11)
				{
					bits[i] = 'B';
				}
				else if(decimal % 16 == 12)
				{
					bits[i] = 'C';
				}
				else if(decimal % 16 == 13)
				{
					bits[i] = 'D';
				}
				else if(decimal % 16 == 14)
				{
					bits[i] = 'E';
				}
				else if(decimal % 16 == 15)
				{
					bits[i] = 'F';
				}
				decimal = decimal/16;
				i--;
				j = j/16;
			}
				printf("\n%s", bits);
			break;
		case 7:
			printf("\nDigite um octal: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			i--;
			for(j = 1; i >= 0; i--, j = j * 8)
			{
				decimal = decimal + j * (bits[i] - 48);
			}
			printf("\n%i", decimal);
			break;
		case 8:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &decimal);
			getchar();
			for (i = 0, j = 1; j < decimal; i++, j = j*8);
			j = j/8;
			aux = i;
			while(i >= 0)
			{
				if(decimal % 8 == 0)
				{
					bits[i] = 0;
				}
				else if(decimal % 8 == 1)
				{
					bits[i] = 1;
				}
				else if(decimal % 8 == 2)
				{
					bits[i] = 2;
				}
				else if(decimal % 8 == 3)
				{
					bits[i] = 3;
				}
				else if(decimal % 8 == 4)
				{
					bits[i] = 4;
				}
				else if(decimal % 8 == 5)
				{
					bits[i] = 5;
				}
				else if(decimal % 8 == 6)
				{
					bits[i] = 6;
				}
				else if(decimal % 8 == 7)
				{
					bits[i] = 7;
				}
				decimal = decimal/8;
				i--;
				j = j/8;
			}
			printf("\n");
			for(i = 1; i <= aux; i++)
			{
				printf("%i", bits[i]);
			}
			break;
		default:
			return 0;
	}
}
