#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void re1 (){
		printf("NOME DA RECEITA");
		
		int primeiraresposta, ing1, ing2, falta;
		
		printf("\nIngredientes: ");
		printf("\n.....");
		printf("\n.....");
		
		printf("\nExiste algun ingrediente que voce nao possua |1 - sim| |2 - nao| : ");
		scanf("%d", &primeiraresposta);
		
		if (primeiraresposta == 1){
			printf("\nQual(is) ingredientes estao faltando (aponte pela numeracao de cada um) : ");
			scanf("%d", &falta);
			
				printf("\n entao use isso no lugar");
		}
		
}
void re2 (){
	
}
void re3 (){
	
}
void re4 (){
	
}
void re5 (){
	
}
void re6 (){
	
}
void re7 (){
	
}
void re8(){
	
}
	
int main(int argc, char *argv[]) {
	
	int op;
	
	printf("\nRECEITA");
	scanf("%d", &op);
	
	switch (op){
		case 1:{
			re1 ();
			break;
		}
	}
	
	return 0;
}
