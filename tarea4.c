#include <stdio.h>
# define N 10
int main()

{
	char palabra[N];
	char pa_aux[N];
	int i;
	int j;
	int largo;
	int cantidad=0;
	int rec = 0;
	printf("Escribe una palabra\n");
	scanf("%s", palabra);
	
	for ( i = 0; i < N; ++i)
	{
		pa_aux[i]=palabra[i];	
	}
	
	for ( i = 0; i < N; ++i)
	{
		for ( j = 0; j < N; ++j)
		{
			if (palabra[i] == pa_aux[j])
			{
				rec=rec+1;
				if(rec%2 == 0)
				{
					cantidad=cantidad+1;
				}
					
			}
		}
	}
	for ( i = 0; i < N; ++i)
	{
		if (palabra[i] == '\0')
		{
			largo = i;
		}
	}
	if (largo == cantidad)
	{
		printf("1\n");
	}
	else 
	{
		printf("0\n");
	}
}
