#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	//Definir variables
	int res,a,b,op;
	//Definir apuntadores
	int *p_res,*p_a,*p_b,*p_op;
	do{
		printf("\n\n");
		printf("\n            1.- Suma                       2.- Resta    ");
		printf("\n                                                               ");
		printf("\n   3.- MULTIPLICACION        4.- Division          5.-Salir     \n\n");
		printf("	");
		scanf("%i",&op);
		
		switch(op)
		{
			case 1: /*Suma*/
				printf("\n-> Introduzca el primer sumando: ");
				scanf("%i",&a);
				printf("\n-> Introduzca el segundo sumando: ");
				scanf("%i",&b);
				res = a+b;
				p_a=&a;
				p_b=&b;
				*p_res=*p_a+*p_b;
				printf("\n         La SUMA de %i + %i es igual a: %i",*p_a,*p_b,*p_res);
				break;

			case 2: /*Resta*/
				printf("\n-> Introduzca el primer numero a restar: ");
				scanf("%i",&a);
				printf("\n-> Introduzca el segundo restado: ");
				scanf("%i",&b);
				res=a-b;
				p_a=&a;
				p_b=&b;
				p_res=&res;
				printf("\n         La RESTA de %i - %i es igual a: %i",*p_a,*p_b,*p_res);
				break;

			case 3: /*Multi*/
				printf("\n-> Introduzca el primer numero: ");
				scanf("%i",&a);
				printf("\n-> Introduzca el segundo numero: ");
				scanf("%i",&b);
				res = a*b;
				p_a=&a;
				p_b=&b;
				p_res=&res;
				printf("\n         La MULTIPLICACION de %i * %i es igual a: %i",*p_a,*p_b,*p_res);
				break;

			case 4: /*Div*/
				printf("\n-> Introduzca el primer numero: ");
				scanf("%i",&a);
				printf("\n-> Introduzca el divisor: ");
				scanf("%i",&b);
				res = a/b;
				p_a=&a;
				p_b=&b;
				p_res=&res;
				printf("\n         La DIVISION de %i / %i es igual a: %i",*p_a,*p_b,*p_res);
				break;
		}
	 /* fin do */
	} while (op!=5);
	return 0;
}