#include <stdio.h>
#include "../../comum/comum.h"
#include "bauru.h"

void RE6 (){
printf("+------------------------------------------+\n"); printf("|                  BAURU                   |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, combo; printf("\nIngredientes da massa: "); printf("\n1 - 3 ovos");
printf("\n2 - 2 xicaras de leite"); printf("\n3 - 1/2 xicara de oleo"); printf("\n4 - 2 xicaras de farinha de trigo");
printf("\n5 - 1 colher de sopa de fermento em po"); printf("\n6 - 1 colher de cha de sal"); printf("\nRecheio: 200g de presunto, 250g de mucarela, 2 tomates, oregano e requeijao/cream cheese (opcional)");
printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: ovos, farinha, fermento e sal o ideal e nao trocar."); printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
combo = (falta1 * 2) + (falta2 * 3);
			switch (combo){
				case 5: {
B1 ();
					break;
				}
				case 2: {
printf("\nOleo ---> use manteiga/margarina derretida (1/2 xicara).\n"); B2 ();
					break;
				}
				case 3: {
printf("\nLeite ---> use agua na mesma quantidade (a massa fica um pouco menos cremosa).\n"); B3 ();
					break;
				}
				case 0: {
printf("\nLeite ---> use agua na mesma quantidade (a massa fica um pouco menos cremosa)."); printf("\nOleo ---> use manteiga/margarina derretida (1/2 xicara).\n"); B0 ();
					break;
				}
			}
			break;
		}
		case 0: {
B1 ();
			break;
		}
	}
}

void B_intro(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 180 °C.\n ");
}

void B_tail(){
int prosseguir;
int faltapresunto, faltamucarela, faltatomate, comborecheio, faltarequeijao, faltaoregano; etapa("\n3 - Acrescente a farinha de trigo aos poucos e bata ate formar uma massa homogenea.\n "); etapa("\n4 - Por ultimo, coloque o fermento e misture rapidamente.\n "); etapa("\n5 - Unte uma forma com oleo e farinha.\n "); etapa("\n6 - Coloque metade da massa no fundo da forma.\n ");
printf("\nPossui presunto [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltapresunto);
printf("\nPossui mucarela [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltamucarela);
printf("\nPossui tomate [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltatomate);
comborecheio = (faltapresunto * 2) + (faltamucarela * 3) + (faltatomate * 4);
	switch (comborecheio){
		case 9: {
printf("\n7 - Faca uma camada de presunto, mucarela e tomate.\n ");
			break;
		}
		case 7: {
printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado.\n"); printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, mucarela e tomate.\n ");
			break;
		}
		case 6: {
printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.\n"); printf("\n7 - Faca uma camada de presunto, queijo prato/provolone/minas e tomate.\n ");
			break;
		}
		case 5: {
printf("\nTomate ---> use tomate-cereja cortado ao meio.\n"); printf("\n7 - Faca uma camada de presunto, mucarela e tomate-cereja.\n ");
			break;
		}
		case 4: {
printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado."); printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.\n"); printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, queijo prato/provolone/minas e tomate.\n ");
			break;
		}
		case 3: {
printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado."); printf("\nTomate ---> use tomate-cereja cortado ao meio.\n"); printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, mucarela e tomate-cereja.\n ");
			break;
		}
		case 2: {
printf("\nMucarela ---> use queijo prato, provolone ou queijo minas."); printf("\nTomate ---> use tomate-cereja cortado ao meio.\n"); printf("\n7 - Faca uma camada de presunto, queijo prato/provolone/minas e tomate-cereja.\n ");
			break;
		}
		case 0: {
printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado."); printf("\nMucarela ---> use queijo prato, provolone ou queijo minas."); printf("\nTomate ---> use tomate-cereja cortado ao meio.\n");
printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, queijo prato/provolone/minas e tomate-cereja.\n ");
			break;
		}
	}
	scanf("%d", &prosseguir);
printf("\nPossui requeijao [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltarequeijao);
	if (faltarequeijao == 1){
printf("\n8 - Se quiser, espalhe um pouco de requeijao por cima.\n ");
	} else {
printf("\nRequeijao ---> use cream cheese ou catupiry.\n"); printf("\n8 - Se quiser, espalhe um pouco de cream cheese ou catupiry por cima.\n ");
	}
	scanf("%d", &prosseguir);
printf("\nPossui oregano [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltaoregano);
	if (faltaoregano == 1){
printf("\n9 - Salpique oregano.\n ");
	} else {
printf("\nOregano ---> use manjericao ou ervas finas.\n"); printf("\n9 - Salpique manjericao ou ervas finas.\n ");
	}
	scanf("%d", &prosseguir);
etapa("\n10 - Cubra com o restante da massa.\n "); printf("11 - Leve ao forno por aproximadamente 35 a 45 minutos, ate ficar douradinho.\n"); printf("Agora e so aproveitar seu bauru!!!!\n");
}

void B1(){
B_intro(); etapa("\n2 - No liquidificador, bata os ovos, o leite, o oleo e o sal.\n ");
B_tail();
}

void B2(){
B_intro(); etapa("\n2 - No liquidificador, bata os ovos, o leite, a manteiga/margarina derretida e o sal.\n ");
B_tail();
}

void B3(){
B_intro(); etapa("\n2 - No liquidificador, bata os ovos, a agua, o oleo e o sal.\n ");
B_tail();
}

void B0(){
B_intro(); etapa("\n2 - No liquidificador, bata os ovos, a agua, a manteiga/margarina derretida e o sal.\n ");
B_tail();
}
