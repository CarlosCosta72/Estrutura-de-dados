#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main (void)
{
    lista lista_teste;
    lista *ptr_lista;
    ptr_lista=&lista_teste;
  
    //cria a lista vazia
    cria(ptr_lista);
  
   //Laço de repetição que preenche com números de 1 a 10
    for(int i=0;i<=10;i++){
      insere(ptr_lista, i, i);
    }
  //Mostra o conteúdo da lista
    for(int i=1;i<=lista_teste.TAM_ATUAL;i++){
      printf("%d\n",elemento(lista_teste,i));
    }
 
   return 0;
  }
  

