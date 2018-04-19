//Javier
//Everardo
//Francisco
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
printf("\n         ");
	printf("\n       ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
	printf("\n 				|:: Huespedes ::|");
	printf("\n       ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน ");
	printf("\n            1 - Crear Lista de huespedes					     ");
	printf("\n            2 - Ingresar huesped al inicio                                 ");
	printf("\n            3 - Ingresar huesped al final                                   ");
	printf("\n            4 - Agregar Huesped en una posicion de la lista                           ");
	printf("\n            5 - Buscar hapitacion disponible                          ");
	printf("\n            6 - Modificar Huesped					    ");
	printf("\n            7 - Eliminar Huesped                                  ");
	printf("\n            8 - Imprimir Lista                                     ");
	printf("\n            9 - Finalizar...                                               ");
    printf("\n        ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
	printf("\n         Elija una opcion: ");
}

typedef struct nodo{
	int dato;
	char nom[50];
	struct nodo *siguiente;
}nodo;

nodo *primero = NULL;
nodo *ultimo  = NULL;
nodo *aux     = NULL;
nodo *aux2    = NULL;

void agregarNodoCola();
void desplegarLista();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void crearLista();
void agregarNodoCabeza();
void agregarNodoPosicion();
void ordenarLista();

int main(){
	int opcionmenu = 0;
	do
	{
		menu();
		scanf("%i", &opcionmenu);
		switch(opcionmenu){
			case 1:
				printf("\n       Crear Lista de huespedes\n");
				crearLista();
				break;
			case 2:
				printf("\n      Ingresar huesped al inicio\n");
				agregarNodoCabeza();
				break;
			case 3:
				printf("\n      Ingresar huesped al final\n");
				agregarNodoCola();
				break;
			case 4:
				printf("\n     Agregar Huesped en una posicion de la lista\n");
				agregarNodoPosicion();
				break;
			case 5:
				printf("\n    Buscar hapitacion disponible\n");
				buscarNodo();
				break;
			case 6:
				printf("\n     Modificar Huesped\n");
				modificarNodo();
				break;
			case 7: 
				printf("\n     Eliminar Huesped\n");
				eliminarNodo();
				break;
			case 8:
				printf("\n     Imprimir Lista de Huespedes \n");
				ordenarLista();
				break;
			case 9:
				printf("\n\n    Programa finalizado...\n\n");
				break;			
			default:
				printf("\n\n Opcion no Valida \n\n");
		}
	} while (opcionmenu != 9);
	return 0;
}

void crearLista(){
	if (primero==NULL){
	int crealis;
	char a[30];
	printf("\n   Cuantos datos quieres agregar: ");
	scanf("%i",&crealis);
		for (int i = 0; i < crealis; ++i){
			nodo *nuevo = (nodo*)malloc(sizeof(nodo));
			printf("\n\n  Ingrese el nombre de la persona: ");
			fflush(stdin);
			gets(nuevo->nom);
			printf("\n  Ingrese numero de la habitacion: ",i+1);
			scanf("%d",&nuevo->dato);
			
			if (primero == NULL){
				primero             = nuevo;
				primero ->siguiente = NULL;
				ultimo              = nuevo;
			}
			else{
				ultimo->siguiente = nuevo;
				nuevo->siguiente  = NULL;
				ultimo            = nuevo;
			}
		}
	printf("\n  Huesped(s) ingresados correctamente\n\n");	
	}
	else{
	printf("\n       Ya se habia creado una lista \n");
	}	
}

void agregarNodoPosicion(){
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf("\n   Despues de que habitacion quieres ingresar al huesped: ");
	scanf("%d", &nodoBuscado);

	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	printf("\n  Ingrese el nombre del huesped: ");
	fflush(stdin);
	gets(nuevo->nom);
	printf("\n  Ingrese el numero de la habitacion: ");
	scanf("%d",&nuevo->dato);

	if (primero != NULL){
		while (actual != NULL && encontrado != 1){
			if (actual->dato == nodoBuscado){				
				aux              = actual;
				actual           = actual->siguiente;
				aux->siguiente   = nuevo;
				nuevo->siguiente = actual;
				
				encontrado            = 1;
				printf("\nSe agrego el huesped\n");
			}
			actual = actual->siguiente;	
		}
		if (encontrado == 0){
			printf(" Verificar habitacion, no encontrado");
		}
	}
	else{
		printf("La lista esta vacia\n");
	}
}

void agregarNodoCola(){
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	printf("\n  Ingrese el nombre del huesped: ");
	fflush(stdin);
	gets(nuevo->nom);
	printf("\n  Ingrese el numero de la habitacion: ");
	scanf("%d",&nuevo->dato);
	if (primero == NULL){
		primero             = nuevo;
		primero ->siguiente = NULL;
		ultimo              = nuevo;
	}
	else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente  = NULL;
		ultimo            = nuevo;
	}
	printf("\n Huesped ingresado correctamente\n");
}

void agregarNodoCabeza(){
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	printf("\n  Ingrese el nombre del huesped: ");
	fflush(stdin);
	gets(nuevo->nom);
	printf("\n  Ingrese el numero de la habitacion: ");
	scanf("%d",&nuevo->dato);
	if (primero == NULL){
		primero             = nuevo;
		primero ->siguiente = NULL;
		ultimo              = nuevo;
	}
	else{
		nuevo->siguiente = primero;
		primero          = nuevo;
		}
	printf("\n Huesped ingresado correctamente\n");
}

void buscarNodo(){
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingresa el numero de la habitacion a buscar: ");
	scanf("%d", &nodoBuscado);

	if (primero != NULL){
		while (actual != NULL && encontrado != 1){
			if (actual->dato == nodoBuscado){
				printf("\n  Hacitacion con el numero ( %d ), se encuentra ocupada por (%s)", nodoBuscado, actual->nom);
				encontrado = 1;
			}
			actual = actual->siguiente;	
		}
		if (encontrado == 0){
			printf("\n   Habitacion Disponible\n");
		}
	}
	else{
		printf("\n   Todas las habitaciones estan disponibles\n");
	}	
}

void eliminarNodo(){
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo *anterior = (nodo*) malloc(sizeof(nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingresa el numero de la habitacion a buscar para eliminar: ");
	scanf("%d", &nodoBuscado);
	if (primero != NULL){
		while (actual != NULL && encontrado != 1){
			if (actual->dato == nodoBuscado){
				if (actual == primero){
					primero = primero->siguiente;
				}
				else if(actual == ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}
				else{
					anterior->siguiente=actual->siguiente;
				}
				printf("\n Huesped eliminado con exito\n");
				encontrado = 1;
			}
			anterior = actual;
			actual   = actual->siguiente;	
		}
		if (encontrado == 0){
			printf("\n Verificar habitacion, huesped no encontrado\n");
		}
		else{
			free(anterior);
		}
	}
	else{
		printf("La lista esta vacia\n");
	}
}

void modificarNodo(){
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a buscar para modificar: ");
	scanf("%d", &nodoBuscado);

	if (primero != NULL){
		while (actual != NULL && encontrado != 1){
			if (actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado\n", nodoBuscado );
				printf("\n  Ingrese el nombre del huesped: ");
				fflush(stdin);
				gets(actual->nom);
				printf("\n  Ingrese el numero de la habitacion: ");
				scanf("%d",&actual->dato);
				printf("\n Los Datos han sido modificados con exito \n\n");
				encontrado = 1;
			}
			actual = actual->siguiente;	
		}
		if (encontrado == 0){
			printf("\n Verificar habitacion, huesped no encontrado\n");
		}
	}
	else{
		printf("La lista esta vacia\n");
	}	
}

void desplegarLista(){
	nodo *actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	if (primero != NULL){
		printf("\n");
		printf("\t    Nombre        ||       No.Cuarto \n");
		printf("\t  ______________________________________\n");
		while (actual != NULL){
			printf("\n\t    %s         ||         %d   \n", actual->nom,actual->dato);
			//printf("         \n", );
			actual = actual->siguiente;	
		}
	}
	else{
		printf("\n     La lista esta vacia\n");
	}
}

void ordenarLista(){
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	int temp;
	aux = primero;
	if (primero != NULL){
while(aux->siguiente!= NULL){
	aux2 = aux->siguiente;
	while(aux2!=NULL){
		if (strcmp(aux2->nom,aux->nom)<0){
			strcpy(nuevo->nom, aux->nom);
			temp= aux->dato;
			strcpy(aux->nom, aux2->nom);
			aux->dato = aux2->dato;
			strcpy(aux2->nom, nuevo->nom);
			aux2->dato = temp;
		}
		aux2=aux2->siguiente;
	}
		aux= aux->siguiente;
	}
}
	desplegarLista();
}
