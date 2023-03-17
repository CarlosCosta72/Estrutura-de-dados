#include "lista.h"
void cria(lista *lista){
    lista->TAM_ATUAL=0;
    lista->TAM_MAX=100;
}

  int vazia(lista lista){
    if(lista.TAM_ATUAL==0){
        return 1;
    }else return -1;
 }

 int cheia(lista lista){
    if(lista.TAM_ATUAL==lista.TAM_MAX){
        return 1;
    }else return -1;
 }

 int tamanho(lista lista){
    return lista.TAM_ATUAL;
 }

 int elemento(lista lista, int pos){
    int dado;
    if(pos>lista.TAM_ATUAL||pos<=0){
        return -1;
    }
    dado= lista.dados[pos-1];
    return dado;
 }
int dado(lista lista,int dado){
  
}

int modifica(lista *lista,int pos,int dado){
    if(pos>=lista->TAM_ATUAL||pos<=0){
        return -1;
    }
    lista->dados[pos-1]=dado;
    return 1;
}

 int insere(lista *lista,int pos,int dado){
    if(lista->TAM_ATUAL==lista->TAM_MAX||pos<=0){
        return -1;
    }
    for(int i=lista->TAM_ATUAL;i>=pos;i--){
        lista->dados[i]=lista->dados[i-1];
    }
    lista->dados[pos-1]=dado;
    lista->TAM_ATUAL++;
    return 1;
 }



 int retira(lista *lista,int pos){
  if(pos>=lista->TAM_ATUAL||pos<1){
    return -1;
  }
  for(int i=pos-1;i<lista->TAM_ATUAL-1;i++){
    lista->dados[i]=lista->dados[i+1];
  }
  lista->TAM_ATUAL--;
   return 0;
}
 