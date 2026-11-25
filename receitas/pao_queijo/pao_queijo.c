#include <stdio.h>
#include "../../comum/comum.h"
#include "pao_queijo.h"

void RE5 (){
printf("+------------------------------------------+\n"); printf("|             PAO DE QUEIJO                |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, combo; printf("\nIngredientes: "); printf("\n1 - 2 xicaras de polvilho doce");
printf("\n2 - 1 xicara de polvilho azedo"); printf("\n3 - 1 xicara de leite"); printf("\n4 - 1/2 xicara de oleo");
printf("\n5 - 1 colher de cha de sal"); printf("\n6 - 2 ovos"); printf("\n7 - 2 xicaras de queijo ralado (mucarela, meia-cura ou parmesao)");
printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: polvilhos, sal, ovos e queijo o ideal e nao trocar."); printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
combo = (falta1 * 2) + (falta2 * 3);
			switch (combo){
				case 5: {
Q1 ();
					break;
				}
				case 2: {
printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n"); Q2 ();
					break;
				}
				case 3: {
printf("\nLeite ---> use agua na mesma quantidade.\n"); Q3 ();
					break;
				}
				case 0: {
printf("\nLeite ---> use agua na mesma quantidade."); printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n"); Q0 ();
					break;
				}
			}
			break;
		}
		case 0: {
Q1 ();
			break;
		}
	}
}

void Q_intro(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Preaqueca o forno a 200 °C.\n ");
}

void Q_tail(){
int faltapolvilho, faltaqueijo; printf("\nPossui os dois tipos de polvilho (doce e azedo) [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltapolvilho);
	if (faltapolvilho == 0){
printf("\nPolvilho ---> pode fazer usando apenas um dos tipos: com o doce fica mais macio, com o azedo fica mais aerado e com sabor mais marcante.\n");
	}
etapa("\n3 - Em uma tigela grande, coloque os polvilhos.\n "); etapa("\n4 - Despeje a mistura quente sobre os polvilhos e misture bem. Deixe amornar.\n "); etapa("\n5 - Acrescente os ovos, um de cada vez, misturando ate incorporar.\n "); printf("\nPossui mucarela e queijo meia-cura conforme a receita [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltaqueijo);
	if (faltaqueijo == 0){
printf("\nQueijo ---> pode usar somente parmesao, somente mucarela, ou uma mistura dos dois, conforme tiver disponivel.\n");
	}
etapa("\n6 - Adicione o queijo ralado e misture ate formar uma massa macia e uniforme.\n "); etapa("\n7 - Unte levemente as maos com oleo ou manteiga e faca bolinhas.\n "); etapa("\n8 - Coloque em uma assadeira, deixando espaco entre elas.\n "); printf("9 - Asse por aproximadamente 25 a 35 minutos, ate ficarem crescidos e levemente dourados.\n"); printf("Agora e so aproveitar seu pao de queijo!!!!\n");
}

void Q1(){
Q_intro(); etapa("\n2 - Em uma panela, coloque o leite, o oleo e o sal e leve ao fogo ate comecar a ferver.\n ");
Q_tail();
}

void Q2(){
Q_intro(); etapa("\n2 - Em uma panela, coloque o leite, a manteiga/margarina derretida e o sal e leve ao fogo ate comecar a ferver.\n ");
Q_tail();
}

void Q3(){
Q_intro(); etapa("\n2 - Em uma panela, coloque a agua, o oleo e o sal e leve ao fogo ate comecar a ferver.\n ");
Q_tail();
}

void Q0(){
Q_intro(); etapa("\n2 - Em uma panela, coloque a agua, a manteiga/margarina derretida e o sal e leve ao fogo ate comecar a ferver.\n ");
Q_tail();
}
