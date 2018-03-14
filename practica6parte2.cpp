#include<iostream>
using namespace std;

int main(){
	int n=15;
	string nombres[n];
	for (int i=0; i<n; i++) {
		cout<<"Pon el nombre numero "<<i+1<<": "; 
		cin>>nombres[i];
	}
	string busca="";
	int encontrado=0;
	int *dir_encontrado;
	cout<<"Cual es el que quieres buscar? ";
	cin>>busca;
	for(int i=0; i<n; i++){
		if(busca==nombres[i]){
			encontrado=1;
		}
	}
	dir_encontrado= &encontrado;
	if(*dir_encontrado==1){
		cout<<"Ese nombre esta en la lista";
	}
	else {
		cout<<"Ese nombre NO esta en la lista";
	}
	return 0;
}
