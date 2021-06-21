#include<stdio.h>
#include<stdlib.h>

//TAD lista
typedef struct Lista{
	int info;
	struct Lista *prox;
}lista;

//operacoes
lista *criar_lista(void);
lista *inserir(lista *L, int x);
lista *remover(lista *L, int x);
void imprimir(lista *L);

lista *criar_lista(void){
	return NULL;
}

lista *inserir(lista *L, int x){
	lista *novo, *aux, *aux_ant;
	
	// criar o novo no
	novo = (lista *) malloc(sizeof(lista));
	novo->info = x;
	
	if(L == NULL){ //caso a lista estiver vazia
		novo->prox = NULL;
		system("cls"); //system("clear"); 
		printf("Insercao realizada!\n");
		return novo; 
	}else{ //inserir de forma ordenada
		aux = L;
		aux_ant = NULL;
		
		while(aux != NULL && x > aux->info){ //encontrar posicao a ser inserida
			aux_ant = aux;
			aux = aux->prox;
		}
		
		//realizar a insercao
		if(aux_ant == NULL){ //no inicio
			novo->prox = aux;
			L = novo;
		}else{ //meio e fim
			aux_ant->prox = novo;
			novo->prox = aux;
		}
		
		system("cls"); //system("clear"); 
		printf("Insercao realizada!\n");
		
		return L;
	}
}

lista *remover(lista *L, int x){
	lista *aux, *aux_ant;
	
	if(L == NULL){ //verificar se a lista esta vazia
		system("cls"); //system("clear"); 
		printf("A lista esta vazia!\n");
	}else{
		aux = L;
		aux_ant = NULL;
		
		while(aux != NULL && x != aux->info){ //encontrar elemento a ser excluido
			aux_ant = aux;
			aux = aux->prox;
		}
		
		if(aux == NULL){
			printf("Elemento nao encontrado!\n");
			return L;
		}else{ //realizar a remocao
			if(aux_ant == NULL){ //no inicio
				L = aux->prox;
				free(aux);
				system("cls"); //system("clear"); 
				printf("Elemento excluido!\n");
				return L;
			}else{ //no meio e no fim
				aux_ant->prox = aux->prox;
				free(aux);
				system("cls"); //system("clear"); 
				printf("Elemento excluido!\n");
				return L;
			}
		}
	}

	return L;
}

void imprimir(lista *L){
	lista *aux;
	
	aux = L;
	
	if(L == NULL){ //verificar se a lista esta vazia
		printf("A lista esta vazia!\n");
	}else{
		printf("Lista:\n");
		while(aux != NULL){
			printf("| %d |->", aux->info);
			aux = aux->prox;
		}
		
		printf("NULL\n");
	}
}

int recuperar(lista **L, int p){
	
	int i, c;
	lista *aux, *aux_ant;
	
	if(L == NULL){ //verificar se a lista esta vazia
		system("cls"); //system("clear"); 
		printf("A lista esta vazia!\n");
    }else{
    	
    	aux = (*L);
        aux_ant = NULL;
        while(aux != NULL && i < p){ //encontrar elemento a ser recuperado
			
			aux_ant = aux;
			aux = aux->prox;
			i++;
		
		}
		
		c = aux->info;
			
	    aux_ant->prox = aux->prox; 
		printf("Elemento excluido!\n");	
		
	}
    
    return c;	
    	
}
    
int localizar(lista *L, int x){
	
	int p = 1;
	lista *aux, *aux_ant;
	
	if(L == NULL){ //verificar se a lista esta vazia
		system("cls"); //system("clear"); 
		printf("A lista esta vazia!\n");
    }else{
	    
		aux = L;
		aux_ant = NULL;
		
		while(aux != NULL && x != aux->info){ //encontrar elemento 
			aux_ant = aux;
			aux = aux->prox;
			p++;
		}
		
		return p;
    }
		
}




