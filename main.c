#include <stdlib.h>
#include <stdio.h>

#include "notas.h"

int main(){
	/*
		Grupo:
		- BRUNA HELOISA FEITOSA VELOSO
		- LINDAIELY RODRIGUES DE SOUSA
		- VICTOR MACEDO CARVALHO
		- VILMACIO DE MOURA DA SILVA
		- ROBSON DE MOURA SANTOS JUNIOR
		- SHEILA PALOMA DE SOUSA BRITO
	*/
	
    Aluno *lista = criar_aluno(1);
	int tam = 0;
	
	printf("Informe a lista com os nomes dos alunos e suas respectivas 4 notas (0 para sair em Nome)\n\n");
	
	while(1){
		if(inserir_lista(&lista, tam)) break;
	    lista = (Aluno*) realloc(lista, sizeof_Aluno() * (++tam + 1));
    	getchar();
	}
    
    if(tam){
	    ordenar_lista(lista, tam);
	    imprimir(lista, tam);
	} else
		printf("Lista vazia\n");
    
    return 0;
}

