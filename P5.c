//Leonardo Assis Gaspar
//11811EAU015

#include<stdio.h>
	
	typedef
		unsigned long long int
	Bytes8 ;
	
	typedef
		struct LCG
		{
		Bytes8 a, c, m, rand_max, atual; 
		}
	LCG;
	
	void semente(LCG * r, Bytes8 seed)
	{
		r->a = 0x5DEECE66DULL;
		r->c = 11ULL;
		r->m = (1ULL << 48);
		r-> rand_max = r->m - 1;
		r->atual = seed;
	}
	
	Bytes8 lcg_rand(LCG * r)
	{
		r-> atual = (r->a * r->atual + r->c)% r->m;
		return r -> atual;
	}
	
	double lcg_rand_01(LCG * r)
	{
		return ((double) lcg_rand(r))/(r->rand_max);
	}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r)
{
	int i;
	for(i = 0; i<tam; i++)
		vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float soma (float *v_i , float *v_f)
{
	if(v_i != v_f + 1 )
	{
		//printf("\n %f , %p \n\n ", *v_i , v_i);
		return (v_i[0] + soma( v_i + 1 , v_f));
		
	}
	else
	{
		//printf("\n %f , %p \n\n ", *v_f , v_f);
	  	return 0;
	  	
	}
}

float produto(float *inicio_vetor , float *fim_vetor)
{
	if(inicio_vetor < fim_vetor)
	{
		//printf("\n %f , %p \n\n ", *inicio_vetor , inicio_vetor);
		return (inicio_vetor[0]*produto( inicio_vetor + 1 , fim_vetor));
	}
	else
	return inicio_vetor[0];
}

int main()
{
	LCG random; 
	semente(&random, 123456);
	
	int op = 0;
	float vetor[50];
	
	gera_numeros(vetor, 50 , 0.5, 1.5 , &random);
	
	
	
	//printf("\n %f , %p , %p\n\n ", *p1 , p1 , p1+1);
	
	printf("\nSerao 50 numeros aleatorios envolvidos.");
	
	printf("\n 1 - SOMA \n 2 - PRODUTO \n OPACAO : ");
	scanf("%d", &op); getchar();
	
	if(op==1)
	{
		printf("\n Soma dos 50 elementos : %g", soma( &vetor[0],&vetor[0] + 49 ) );
	}
	
	else if(op==2)
	{
		printf("\n Produto dos 50 elementos : %g", produto( &vetor[0], &vetor[0] + 49) );
	}
	
	return 0;
}
