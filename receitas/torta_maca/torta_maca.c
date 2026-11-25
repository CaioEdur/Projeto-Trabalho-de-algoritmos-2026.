#include <stdio.h>
#include "../../comum/comum.h"
#include "torta_maca.h"

void RE8 (){
printf("+------------------------------------------+\n"); printf("|             TORTA DE MACA                |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, falta3, combo; printf("\nIngredientes da massa: "); printf("\n1 - 2 xicaras de farinha de trigo");
printf("\n2 - 1/2 xicara de acucar"); printf("\n3 - 100g de manteiga ou margarina"); printf("\n4 - 1 ovo");
printf("\n5 - 1 colher de cha de fermento em po"); printf("\n6 - 1 pitada de sal"); printf("\nIngredientes do recheio: 4 macas, 1/2 xicara de acucar, 1 colher de cha de canela em po, suco de 1/2 limao e 1 colher de sopa de farinha ou amido de milho");
printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: farinha, ovo, fermento, sal e maca o ideal e nao trocar."); printf("\nPossui manteiga [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
printf("\nPossui limao [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);
combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);
			switch (combo){
				case 2: {
printf("\nAcucar ---> use acucar mascavo na mesma quantidade."); printf("\nLimao ---> use suco de laranja no lugar.\n"); T2 ();
					break;
				}
				case 3: {
printf("\nManteiga ---> use margarina/oleo na mesma quantidade."); printf("\nLimao ---> use suco de laranja no lugar.\n"); T3 ();
					break;
				}
				case 4: {
printf("\nManteiga ---> use margarina/oleo na mesma quantidade."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); T4 ();
					break;
				}
				case 5: {
printf("\nLimao ---> use suco de laranja no lugar.\n"); T5 ();
					break;
				}
				case 6: {
printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); T6 ();
					break;
				}
				case 7: {
printf("\nManteiga ---> use margarina/oleo na mesma quantidade.\n"); T7 ();
					break;
				}
				case 9: {
T1 ();
					break;
				}
				case 0: {
printf("\nManteiga ---> use margarina/oleo na mesma quantidade."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade."); printf("\nLimao ---> use suco de laranja no lugar.\n");
T0 ();
					break;
				}
			}
			break;
		}
		case 0: {
T1 ();
			break;
		}
	}
}

void T_mid(){
int prosseguir, faltamaca; etapa("\n4 - Separe aproximadamente 1/3 da massa para fazer a cobertura.\n "); etapa("\n5 - Forre o fundo e as laterais de uma forma com o restante da massa.\n "); printf("\nPossui macas [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltamaca);
	if (faltamaca == 1){
printf("\n6 - Descasque as macas e corte em fatias finas.\n ");
	} else {
printf("\nMaca ---> use pera na mesma quantidade.\n"); printf("\n6 - Descasque as peras e corte em fatias finas.\n ");
	}
	scanf("%d", &prosseguir);
}

void T_tail(){
etapa("\n8 - Coloque o recheio (de maca ou pera) sobre a massa.\n "); etapa("\n9 - Abra o restante da massa e coloque por cima. Voce tambem pode fazer tirinhas e montar uma cobertura trancada.\n "); etapa("\n10 - Leve ao forno por aproximadamente 35 a 45 minutos, ate a massa ficar douradinha.\n "); printf("11 - Espere amornar antes de cortar.\n");
printf("Agora e so aproveitar sua torta de maca!!!!\n");
}

void T1(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n "); etapa("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar, a canela, o limao e a farinha ou amido.\n ");
T_tail();
}

void T2(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n "); etapa("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar mascavo, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
T_tail();
}

void T3(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n "); etapa("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
T_tail();
}

void T4(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n "); etapa("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar mascavo, a canela, o limao e a farinha ou amido.\n ");
T_tail();
}

void T5(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n "); etapa("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
T_tail();
}

void T6(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n "); etapa("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar mascavo, a canela, o limao e a farinha ou amido.\n ");
T_tail();
}

void T7(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n "); etapa("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar, a canela, o limao e a farinha ou amido.\n ");
T_tail();
}

void T0(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n "); etapa("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n "); etapa("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n "); T_mid(); etapa("\n7 - Misture as macas com o acucar mascavo, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
T_tail();
}
