#include <stdio.h>

int main(){
    int x,y, resultado;
    int *p1;
    int opcion;
    
	do{
	 //MENU
		printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         |               :: C A L C U L A D O R A ::                 |");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
		printf("\n         |                                                           |");
		printf("\n         |       1.- Suma                     3.- Multiplicacion     |");
		printf("\n         |                                                           |");
		printf("\n         |       2.- Resta                    4.- Division           |");
		printf("\n         |                        5.- Salir                          |");
		printf("\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
		printf("\n         Elija una opcion: ");
		scanf("%d",&opcion);
	
		//Switch
		switch(opcion)	{
			case 1: {    /* Suma */
				//pedir numeros
				printf("\nIngrese x: ");
				scanf("%i",&x);
				printf("Ingrese y: ");
				scanf("%i",&y);
				//Operacion
				resultado=x+y;
				p1=&resultado;
				printf("\n       -->  La SUMA de %i + %i es igual a %i",x,y,*p1);
				printf("\n");
				break;
			}	
			case 2: {    /* Resta */
				//pedir numeros
				printf("\nIngrese x: ");
				scanf("%i",&x);
				printf("Ingrese y: ");
				scanf("%i",&y);
				//Operacion
				resultado=x-y;
				p1=&resultado;
				printf("\n        --> La RESTA de %i - %i es igual a %i",x,y,*p1);
				printf("\n");
				break;
			}
			case 3: {    /* Multiplicacion */
				//pedir numeros
				printf("\nIngrese x: ");
				scanf("%i",&x);
				printf("Ingrese y: ");
				scanf("%i",&y);
				//Operacion
				resultado=x*y;
				p1=&resultado;
				printf("\n       -->  La MULTIPLICACION de %i * %i es igual a %i",x,y,*p1);
				printf("\n");
				break;
			}
			case 4: {
				//pedir numeros
				printf("\nIngrese x: ");
				scanf("%i",&x);
				printf("Ingrese y: ");
				scanf("%i",&y);
				//Operacion
				if (y!=0){ /* Si el divisor es distinto de 0 realizara la operacion */
					resultado=x/y;
					p1=&resultado;
					printf("\n      -->   El cociente de la DIVISION de %i entre %i es igual a %i",x,y,*p1);
					printf("\n");
				}
				else 
					printf("\n       -->  No se puede realizar esa division porque el divisor es 0!");  /* Si el divisor es igual a 0 muestra este mensaje de error */
					printf("\n");
				break;
			}
			case 5:{   /* Salir */
				printf("\n                            Pulse ENTER para salir...");
				printf("\n");
				break;
			}
		}
	}while ( opcion != 5 );
}

