#include <stdio.h>
#include "../../comum/comum.h"
#include "bolo_laranja.h"

void RE4 (){
printf("+------------------------------------------+\n"); printf("|            BOLO DE LARANJA               |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, falta3, combo; printf("\nIngredientes: "); printf("\n1 - 3 ovos");
printf("\n2 - 1 xicara de acucar"); printf("\n3 - 1/2 xicara de oleo"); printf("\n4 - 1 xicara de suco de laranja natural");
printf("\n5 - Raspas de 1 laranja (opcional)"); printf("\n6 - 2 xicaras de farinha de trigo"); printf("\n7 - 1 colher de sopa de fermento em po");
printf("\n8 - 1 pitada de sal"); printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: ovos, farinha, fermento e sal o ideal e nao trocar."); printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui suco de laranja [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);
combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);
			switch (combo){
				case 2: {
printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja)."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); L2 ();
					break;
				}
				case 3: {
printf("\nOleo ---> use manteiga/margarina derretida (100g)."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); L3 ();
					break;
				}
				case 4: {
printf("\nOleo ---> use manteiga/margarina derretida (100g)."); printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).\n"); L4 ();
					break;
				}
				case 5: {
printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); L5 ();
					break;
				}
				case 6: {
printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).\n"); L6 ();
					break;
				}
				case 7: {
printf("\nOleo ---> use manteiga/margarina derretida (100g).\n"); L7 ();
					break;
				}
				case 9: {
L1 ();
					break;
				}
				case 0: {
printf("\nOleo ---> use manteiga/margarina derretida (100g)."); printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja)."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
L0 ();
					break;
				}
			}
			break;
		}
		case 0: {
L1 ();
			break;
		}
	}
}

void L_intro(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n ");
}

void L_tail(){
int prosseguir, faltafarinha; etapa("\n3 - Despeje a mistura em uma tigela.\n "); printf("\nDeseja deixar o bolo mais fofinho substituindo parte da farinha por amido de milho [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltafarinha);
	if (faltafarinha == 1){
printf("\nFarinha de trigo ---> substitua 1/2 xicara da farinha por 1/2 xicara de amido de milho.\n"); printf("\n4 - Acrescente 1 e 1/2 xicara de farinha de trigo e 1/2 xicara de amido de milho aos poucos, misturando delicadamente ate a massa ficar homogenea.\n ");
	} else {
printf("\n4 - Acrescente a farinha de trigo aos poucos, misturando delicadamente ate a massa ficar homogenea.\n ");
	}
	scanf("%d", &prosseguir);
etapa("\n5 - Adicione as raspas de laranja (se for usar) e misture.\n "); etapa("\n6 - Por ultimo, coloque o fermento e mexa delicadamente apenas ate incorporar.\n "); etapa("\n7 - Despeje em uma forma untada e enfarinhada.\n "); etapa("\n8 - Leve ao forno por aproximadamente 35 a 40 minutos, ou ate dourar e o palito sair limpo.\n "); printf("9 - Espere amornar antes de desenformar.\n");
printf("Agora e so aproveitar seu bolo de laranja!!!!\n");
}

void L1(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar, o oleo e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L2(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, o oleo e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L3(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, a manteiga/margarina derretida e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L4(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar, a manteiga/margarina derretida e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L5(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, o oleo e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L6(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar, o oleo e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L7(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar, a manteiga/margarina derretida e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
L_tail();
}

void L0(){
L_intro(); etapa("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, a manteiga/margarina derretida e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
L_tail();
}
