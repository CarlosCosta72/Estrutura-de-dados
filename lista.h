#ifndef LISTA_H
#define LISTA_H
#define max 100 
 typedef struct
 {
   int dados [max];
   int TAM_ATUAL;
   int TAM_MAX;

 }lista;
 void cria(lista*);
 int vazia(lista);
 int cheia(lista);
 int tamanho(lista);
 int elemento(lista,int);
 int dado(lista, int);
 int modifica(lista*,int,int);
 int insere(lista*, int, int);
 int retira(lista*, int);
#endif