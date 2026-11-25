#include <stdio.h>
#include "../../comum/comum.h"
#include "cueca_virada.h"

void RE3 (){
printf("+------------------------------------------+\n"); printf("|             CUECA VIRADA                 |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, falta3, combo; printf("\nIngredientes: "); printf("\n1 - 3 xicaras de farinha de trigo");
printf("\n2 - 3 colheres de sopa de acucar"); printf("\n3 - 2 ovos"); printf("\n4 - 2 colheres de sopa de manteiga/margarina");
printf("\n5 - 1/2 xicara de leite"); printf("\n6 - 1 colher de sopa de fermento quimico em po"); printf("\n7 - 1 pitada de sal");
printf("\n8 - Oleo para fritar"); printf("\n9 - Acucar e canela para finalizar"); printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: a farinha, os ovos, o sal e o oleo de fritar o ideal e nao trocar."); printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
printf("\nPossui fermento quimico [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);
combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);
			switch (combo){
				case 2: {
printf("\nAcucar ---> use acucar mascavo na mesma quantidade."); printf("\nFermento quimico ---> use bicarbonato de sodio.\n"); V2 ();
					break;
				}
				case 3: {
printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade."); printf("\nFermento quimico ---> use bicarbonato de sodio.\n"); V3 ();
					break;
				}
				case 4: {
printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); V4 ();
					break;
				}
				case 5: {
printf("\nFermento quimico ---> use bicarbonato de sodio.\n"); V5 ();
					break;
				}
				case 6: {
printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n"); V6 ();
					break;
				}
				case 7: {
printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade.\n"); V7 ();
					break;
				}
				case 9: {
V1 ();
					break;
				}
				case 0: {
printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade."); printf("\nAcucar ---> use acucar mascavo na mesma quantidade."); printf("\nFermento quimico ---> use bicarbonato de sodio.\n");
V0 ();
					break;
				}
			}
			break;
		}
		case 0: {
V1 ();
			break;
		}
	}
}

void V_tail(){
etapa("\n3 - Misture tudo ate formar uma massa.\n "); etapa("\n4 - Coloque a massa sobre uma superficie enfarinhada e sove por alguns minutos, ate ficar lisa e sem grudar nas maos.\n "); etapa("\n5 - Abra a massa em um rolo, deixando com aproximadamente 0,5 cm de espessura.\n "); etapa("\n6 - Corte em tiras ou retangulos.\n "); etapa("\n7 - Faca um pequeno corte no meio de cada pedaco.\n "); etapa("\n8 - Passe uma das pontas pelo corte, formando o formato tradicional da cueca virada.\n ");
etapa("\n9 - Aqueca o oleo em fogo medio e frite aos poucos, virando para dourar dos dois lados.\n "); etapa("\n10 - Retire e coloque sobre papel-folha.\n "); printf("\n11 - Passe ainda morno na mistura de acucar (comum ou mascavo) e canela.\n"); printf("DICA: quanto mais fininha a massa voce abrir, mais gostosa e sequinha a cueca virada fica.\n");
printf("Agora e so aproveitar sua cueca virada!!!!\n");
}

void V1(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar, sal e fermento quimico.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e leite.\n "); V_tail();
}

void V2(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e bicarbonato de sodio.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e leite.\n "); V_tail();
}

void V3(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar, sal e bicarbonato de sodio.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n "); V_tail();
}

void V4(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e fermento quimico.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n "); V_tail();
}

void V5(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar, sal e bicarbonato de sodio.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e leite.\n "); V_tail();
}

void V6(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e fermento quimico.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e leite.\n "); V_tail();
}

void V7(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar, sal e fermento quimico.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n "); V_tail();
}

void V0(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e bicarbonato de sodio.\n "); etapa("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n "); V_tail();
}
