#include <stdio.h>

int main(){
	int x;
	int n,mayor,menor,xmay,xmen=0;
	int A[10];
	
	//pedir número de elementos
	printf("\nNumero de elementos: ");
	scanf("%d",&n);
	A[0]= A[n];
	//arreglo
	printf("\nIntroduzca los elementos: \n"); 
	for (x=0; x<n; ++x){
		printf("De valor de A[%d]:", x); 
		scanf("%d",&A[x]); 
	} 
	//imprimir arreglo
	printf("\nArreglo: [ ");
	for (x=0; x<n; ++x){
	 printf("%d, ",A[x]);	
	}
	printf("] ");
	printf("\n");
	//inicializar punteros
	int *p1, *p2; 
	//Numero mayor
	for (x=0; x<n; ++x){
      	if(mayor<A[x]){
           	mayor=A[x];
           	xmay=x;	
    	}
    	if (A[x] < menor){ 
			menor = A[x];  
			xmen=x;
		}
  	}
  	p1=&mayor;
  	p2=&menor;
  	printf("\n");
  	printf("El numero mayor ingresado en el arreglo es [ %i ]: ",*p1);
   	printf("\n");			
   	printf("El numero menor ingresado en el arreglo es[ %i ]: \n",*p2);
}
