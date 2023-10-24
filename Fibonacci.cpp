#include <stdio.h>

int serie(int num) 
{    
	if (num <= 1) 
	{         
	return num;     
	}     
return serie(num - 1) + serie(num - 2); 
} 

int main() 
{     
int Elementos;     
printf("NUmero elementos de la serie de Fibonacci: \n");    
scanf("%d", &Elementos);         
int serieFibonacci[Elementos];     
for (int i = 0; i < Elementos; i++) 
	{         
	serieFibonacci[i] = serie(i);     
	}    
printf("Serie de Fibonacci con %d elementos:\n ", Elementos);     
for (int i = 0; i < Elementos; i++) 
	{                 
	printf("%d\n ", serieFibonacci[i]);     
	}        
return 0; 
}
