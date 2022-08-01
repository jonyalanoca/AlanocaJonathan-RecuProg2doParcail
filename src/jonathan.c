/*
 ============================================================================
 Name        : jonathan.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int id;
	char marca[20];
	int tipo;
	float peso;
}Veiculo;
Veiculo* constructorParamerizada(int id, char marca[20], int tipo, float peso);
Veiculo* constructorBase();
int guardarEnArchivoDeTexto(Veiculo* auto);
int guardarEnArchivoBinario(Veiculo* auto);
int main(void) {
	Veiculo* auto=NULL;
	auto=constructorParamerizada(1000, "Peugeot", "4x4", 1.200);
	guardarEnArchivoDeTexto(auto);
	guardarEnArchivoBinario(auto);
	return EXIT_SUCCESS;
}
int guardarEnArchivoDeTexto(Veiculo* auto){
	todoOK=-1;
	if(auto!=NULL){
		FILE* f= fopen(archivo.txt, “w”);
		fwrite(&auto,sizeof(Veiculo),4,f);
		fclose(f);
		todoOk=0;
	}
	return todoOk;
}
int guardarEnArchivoBinario(Veiculo* auto){
	todoOK=-1;
	if(auto!=NULL){
		FILE* f= fopen(archivo.txt, “wb”);
		fwrite(&auto,sizeof(Veiculo),1,f);
		fclose(f);
		todoOk=0;
	}
	return todoOk;
}
Veiculo* constructorBase(){
	Veiculo* aux= (Veiculo*)malloc(sizeof(Veiculo));
		if(aux==NULL){
			exit();
		}
		return aux;
}
Veiculo* constructorParamerizada(int id, char marca[20], int tipo, float peso){
	Veiculo* aux= (Veiculo*)malloc(sizeof(Veiculo));
	if(aux==NULL){
		exit();
	}
	aux->id=id;
	strcpy(aux->marca,marca);
	aux->tipo=tipo;
	aux->peso=peso;
	return aux;
}


