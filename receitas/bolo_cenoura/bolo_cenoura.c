#include <stdio.h>
#include "../../comum/comum.h"
#include "bolo_cenoura.h"

void RE2 (){
printf("+------------------------------------------+\n"); printf("|            BOLO DE CENOURA               |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, combo; printf("\nIngredientes: "); printf("\n1 - 3 cenouras medias descascadas e picadas");
printf("\n2 - 3 ovos"); printf("\n3 - 1/2 xicara de oleo"); printf("\n4 - 2 xicaras de acucar");
printf("\n5 - 2 e 1/2 xicaras de farinha de trigo"); printf("\n6 - 1 colher de sopa de fermento quimico em po"); printf("\nCobertura (opcional) - acucar, chocolate em po, manteiga/margarina e leite");
printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: cenoura, ovos, acucar e farinha o ideal e nao trocar."); printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui fermento quimico [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
combo = (falta1 * 2) + (falta2 * 3);
			switch (combo){
				case 5: {
C1 ();
					break;
				}
				case 2: {
printf("\nFermento quimico ---> use bicarbonato de sodio, mas vai precisar de um ingrediente acido para funcionar.\n"); C2 ();
					break;
				}
				case 3: {
printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n"); C3 ();
					break;
				}
				case 0: {
printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade."); printf("\nFermento quimico ---> use bicarbonato de sodio, mas vai precisar de um ingrediente acido para funcionar.\n"); C0 ();
					break;
				}
			}
			break;
		}
		case 0: {
C1 ();
			break;
		}
	}
}

void C_mid(){
etapa("\n2 - Despeje a mistura em uma tigela.\n "); etapa("\n3 - Acrescente o acucar e misture.\n "); etapa("\n4 - Adicione a farinha de trigo aos poucos, mexendo ate a massa ficar uniforme.\n ");
}

void C_tail(){
int quercobertura, faltachoc, faltaleite, combocob; etapa("\n6 - Coloque em uma forma untada e enfarinhada.\n "); etapa("\n7 - Leve ao forno preaquecido a 180°C por aproximadamente 35-45 minutos.\n "); printf("8 - Faca o teste do palito: se sair limpo, esta pronto.\n");
printf("\nVai fazer a cobertura (opcional) [1]-SIM | [0]-NAO:  ");
	scanf("%d", &quercobertura);
	if (quercobertura == 1){
printf("\nPossui chocolate em po [1]-SIM | [0]-NAO:  ");
		scanf("%d", &faltachoc);
printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
		scanf("%d", &faltaleite);
combocob = (faltachoc * 2) + (faltaleite * 3);
		switch (combocob){
			case 5: {
printf("\nCOBERTURA:\n"); printf("1. Coloque o acucar, o chocolate em po, a manteiga/margarina e o leite em uma panela.\n");
				break;
			}
			case 2: {
printf("\nLeite (cobertura) ---> use agua na mesma quantidade.\n"); printf("\nCOBERTURA:\n"); printf("1. Coloque o acucar, o chocolate em po, a manteiga/margarina e a agua em uma panela.\n");
				break;
			}
			case 3: {
printf("\nChocolate em po ---> use cacau em po na mesma quantidade.\n"); printf("\nCOBERTURA:\n"); printf("1. Coloque o acucar, o cacau em po, a manteiga/margarina e o leite em uma panela.\n");
				break;
			}
			case 0: {
printf("\nChocolate em po ---> use cacau em po na mesma quantidade."); printf("\nLeite (cobertura) ---> use agua na mesma quantidade.\n"); printf("\nCOBERTURA:\n");
printf("1. Coloque o acucar, o cacau em po, a manteiga/margarina e a agua em uma panela.\n");
				break;
			}
		}
printf("2. Leve ao fogo medio, mexendo sempre.\n"); printf("3. Quando comecar a ferver e ficar levemente cremoso, desligue.\n"); printf("4. Despeje sobre o bolo morno.\n");
	}
printf("\nAgora e so aproveitar seu bolo de cenoura!!!!\n");
}

void C1(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - No liquidificador, coloque as cenouras, os ovos e o oleo: bata ate ficar bem lisinho.\n "); C_mid(); etapa("\n5 - Por ultimo, coloque o fermento quimico e misture delicadamente.\n ");
C_tail();
}

void C2(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - No liquidificador, coloque as cenouras, os ovos e o oleo: bata ate ficar bem lisinho.\n "); C_mid(); etapa("\n5 - Por ultimo, coloque o bicarbonato de sodio (junto de um ingrediente acido) e misture delicadamente.\n ");
C_tail();
}

void C3(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - No liquidificador, coloque as cenouras, os ovos e a manteiga/margarina derretida: bata ate ficar bem lisinho.\n "); C_mid(); etapa("\n5 - Por ultimo, coloque o fermento quimico e misture delicadamente.\n ");
C_tail();
}

void C0(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - No liquidificador, coloque as cenouras, os ovos e a manteiga/margarina derretida: bata ate ficar bem lisinho.\n "); C_mid(); etapa("\n5 - Por ultimo, coloque o bicarbonato de sodio (junto de um ingrediente acido) e misture delicadamente.\n ");
C_tail();
}
