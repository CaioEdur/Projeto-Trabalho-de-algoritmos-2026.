#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void re1 (){
		
	printf("=======PÃO========");
		
	int primeiraresposta, falta1 , falta2 , falta3 , combo;
		
	printf("\nIngredientes: ");
	
	printf("\n1 - 500g de farinha de trigo");
	printf("\n2 - 10g de fermento biologico seco");
	printf("\n3 - 10g de sal");
	printf("\n4 - 10g de acucar");
	printf("\n5 - 300ml de leite");
	printf("\n6 - 20ml de margarina");
	printf("\nBonus caso queira - 1 colher de cha de melhorador de farinha");
		
	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\n ser trocados, e o seu caso |1 - sim| |2 - nao| : ");
	scanf("%d", &primeiraresposta);
		
		switch (primeiraresposta){
			case 1: {
					printf("\nINGREDIENTES SUBSTITUIVEIS\n");
					
					printf("Possui acucar |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta1);
					printf("\nPossui oleo |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta2);
					printf("\nPossui leite |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta3);	
									
					combo = falta1 + falta2 + falta3;
					
					switch (combo){
						case 1:{
								printf("\nAçúcar ---> pode retirar ou use uma colher de chá de mel.");
							break;
						}
						case 2:{
							 	printf("Açúcar ---> pode retirar ou use uma colher de chá de mel.");
							break;
						}
						
					}
						
									
				break;
			}
			case 3: {
				
				break;
			}
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
	
	printf("\nRECEITA: ");
	scanf("%d", &op);
	
	switch (op){
		case 1:{
			re1 ();
			break;
		}
	}
	
	return 0;
}
