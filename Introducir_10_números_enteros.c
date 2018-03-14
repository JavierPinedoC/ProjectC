#include  <stdio.h>

int main(void)
{
    int A[10];
    int v,sum,i,j,m;
    printf("Ingrese 10 numeros enteros\n");
    printf("\n");
    for (i = 0; i < 10; ++i){
      printf("Ingresa el valor [%i]: ",i );
    	scanf("%i",&v);	
    	A[i]=v;
    	sum += A[i];
    }
    printf("\n");
    printf("El arreglo es: ");
    for (i = 0; i < 10; ++i)
    {
    	printf("%i,",A[i]);
    }
    printf("\n");
    printf("La suma de los elementos del arreglo es: %i\n",sum);

    int *p,*q;
    for(i=0;i<10;i++)
  	{
   	 for(j=0;j<10-1;j++)
   		{
      		if(A[i]>A[j])
       		{
	 			 m=A[i];
				 A[i]=A[j];
				 A[j]=m;
       		}
    	}

  	}
    *p = &m;

    printf("El numero mayor es: %i\n",*p);
                 
    return 0;
}