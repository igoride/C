#include<stdio.h>
#include"lista.h"

int main(void){
	int opcao = 0;
	int x, p;
	lista *L;
	
	L = criar_lista();
	
	while(opcao != 6){
		printf("-----------------\n");
		printf("1 - Inserir\n");
		printf("2 - Remover\n");
		printf("3 - Imprimir\n");
		printf("4 - Recuperar\n");
		printf("5 - Localizar\n");
		printf("6 - Sair\n");
		printf("-----------------\n");
		printf("Digite um opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1 :
				printf("Digite o valor do novo elemento: ");
				scanf("%d", &x);
				L = inserir(L, x);
	    	break;
	    	
	    	case 2 :
				printf("Digite o valor do elemento a ser removido: ");
				scanf("%d", &x);
				L = remover(L, x);
	    	break;
	    	
	    	case 3 :
	    		system("cls");
	    		imprimir(L);
	    		
	    	break;
	    	
	    	case 4 :
	    		printf("Digite a posicao do elemento a ser retornado\n");
	    		scanf("%d", &p);
	    		p=p-1;
	    		printf("O elemento da posicao %d e : %d\n", p+1, recuperar(&L, p));
	    	break;
	    	
	    	case 5 :
	    		printf("Digite o elemento a ser localizado\n");
	    		scanf("%d", &x);
	    		p = localizar(L, x);
	    		printf("O elemento %d esta na posicao %d", x, p);
	    	break;
	    	
	    	case 6 :
	    		printf("\nSaindo...\n");
	    	break;
		}
	}
	
	return 0;
}
