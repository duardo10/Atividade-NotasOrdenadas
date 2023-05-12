#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "notas.h"

struct aluno{
    char nome[100];
    float nota[4];
};

Aluno *criar_aluno(int tamanho){
	return (Aluno*) malloc(sizeof_Aluno() * tamanho);
}

int sizeof_Aluno(){
	return sizeof(Aluno);
}

int inserir_lista(Aluno **lista, int tam){
	printf("Nome: ");
	scanf("%[^\n]s", (*lista)[tam].nome);
	
	if((*lista)[tam].nome[0] == '0')
		return 1;
	
    preenche_notas(&(*lista)[tam]);
    return 0;
}

void preenche_notas(Aluno *aluno){
	int i;
	
	printf("Notas: ");
	
	for(i = 0; i < 4; i++)
		scanf("%f", &aluno->nota[i]);
	
	ordenar_notas(aluno->nota, 4);
}

void ordenar_notas(float *notas, int tam){
    int i, j;
    float aux;
    
    for(i = 1; i < tam; i++){
        aux = notas[i];
        
        for(j = i - 1; j >= 0 && notas[j] < aux; j--)
            notas[j + 1] = notas[j];
        
        notas[j + 1] = aux;
    }
}

void ordenar_lista(Aluno *lista, int tam){
	int i, j;
	Aluno aux;
	
	for(i = 1; i < tam; i++){
		aux = lista[i];
		
		for(j = i - 1; j>= 0 && strcmp(lista[j].nome, aux.nome) > 0; j--)
			lista[j + 1] = lista[j];
		
		lista[j + 1] = aux;
	}
}

void imprimir_aluno(Aluno aluno){
	int i;
	
	printf("%-30s", aluno.nome);
	
	for(i = 0; i < 3; i++)
		printf("%.1f ", aluno.nota[i]);
	
	printf("%.1f\n", aluno.nota[i]);
}

void imprimir(Aluno *lista, int tam){
    int i;
    
    printf("\n%-30s%s\n", "NOME", "NOTAS");
    
    for(i = 0; i < tam; i++)
        imprimir_aluno(lista[i]);
}

