#ifndef NOTAS_H_INCLUDED
#define NOTAS_H_INCLUDED

typedef struct aluno Aluno;

Aluno *criar_aluno(int tamanho);
int sizeof_Aluno();
int inserir_lista(Aluno **lista, int tam);
void preenche_notas(Aluno *aluno);
void imprimir_aluno(Aluno aluno);
void imprimir(Aluno *lista, int tam);
void ordenar_notas(float *notas, int tam);
void ordenar_lista(Aluno *lista, int tam);

#endif

