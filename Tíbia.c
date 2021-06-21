#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char tipo[30];
	char nome[30];
	int poder;
} arma;

typedef struct {
	// informacoes basicas
	char nome[30];
	char classe[30];
	int level;
	int vida;
	
	int ataque;
	int defesa;
	
	//equipamento
	arma *mao_direita; // arma
} personagem;

typedef struct {

	int vida;
	int ataque;
	int defesa;

} guerreiro;


typedef struct{
	
	int ataque;
	int defesa;
	int vida;

}arqueiro;


void printstatus(personagem *p);
personagem* criar_personagem();
arma* criar_arma(void);
int atacar(personagem *agressor, personagem *agredido);// (dano + atk) - (def + escudo) 

int main(void){
	
	personagem player;
	
	player = criar_personagem();
	
	printstatus(&player);
	
	return 0;
}

personagem* criar_personagem(){
	
	personagem p;
	
	arqueiro a;
	a.ataque = 30;
	a.defesa = 10;
	a.vida = 20;
	
	guerreiro g;
	g.ataque = 10;
	g.defesa = 30;
	g.vida = 20;
	 
	int opc = 0;
	
	printf("Digite o nome de seu personagem\n");
	scanf("%[^\n]", p.nome);
	printf("a:%s\n", p.nome);
	
	while(opc != 1){
		
		printf("Escolha sua classe\n");
		printf("1 - Arqueiro\n");
		printf("2 - Guerreiro\n");
		scanf("%i", &opc);
		if(opc == 1){
			strcpy(p.classe, "arqueiro");
			p.ataque = a.ataque;
			p.defesa = a.defesa;
			p.vida = a.vida;
			
		}
		if(opc == 2){
			strcpy(p.classe, "guerreiro");
			p.ataque = g.ataque;
			p.defesa = g.defesa;
			p.vida = g.vida;
			opc = 1;
		}
	}
	
	return &p;
	
}


arma* criar_arma(){
	
	arma ar;
	int op;
	
	printf("Escolha o tippo da sua arma");
	printf("1 - espada");
	printf("2 - arco");
	scanf("%i", &op);
	if(op == 1){
		ar.poder = 10;
		strcpy(ar.tipo, "Espada");
	}if(op == 2){
		ar.poder = 10;
		strcpy(ar.tipo, "Arco");
	}
	printf("Digite o nome de sua arma");
	scanf("%[^\n]", ar.nome);
	
	return &ar;
	
}


void printstatus(personagem *p){
	
	printf("Nome : %s\n", p->nome);
	printf("Classe : %s\n", p->classe);
	printf("Ataque : %i\n", p->ataque);
	printf("Defesa : %i\n", p->defesa);
	printf("Vida : %i\n", p->vida);
	
	
}








































