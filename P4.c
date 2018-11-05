//Leonardo Assis Gaspar
//11811EAU015

#include <stdio.h>

long long int ackermann ( int a, int b)
{
	if( a > 0 && b > 0 )
	{
		return ackermann(a-1, ackermann(a , b-1));
	}
	else if( a > 0 && b == 0)
	{
		return ackermann( a - 1 , 1 );
	}
	else if(a == 0)
	{
		return b+1;
	}
}

int main()
{
	int m, n, res = 0;
	printf("Digite um valor para m: ");
	scanf("%i", &m);
	printf("\nDigite um valor para n: ");
	scanf("%i", &n);
	printf("\nA(%d,%d) = %lld", m , n, ackermann(m,n) );
	return 0;
}
