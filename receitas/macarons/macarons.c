#include <stdio.h>
#include "../../comum/comum.h"
#include "macarons.h"

void RE7 (){
printf("+------------------------------------------+\n"); printf("|                MACARONS                  |\n"); printf("+------------------------------------------+\n");
int primeiraresposta, falta1, falta2, combo; printf("\nIngredientes das casquinhas: "); printf("\n1 - 100g de farinha de amendoas");
printf("\n2 - 100g de acucar de confeiteiro"); printf("\n3 - 100g de acucar refinado"); printf("\n4 - 100g de claras de ovo");
printf("\n5 - Corante alimenticio em gel (opcional)"); printf("\nRecheio: 100g de chocolate branco e 50g de creme de leite"); printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
	switch (primeiraresposta){
		case 1: {
printf("+------------------------------------------+\n"); printf("|       INGREDIENTES SUBSTITUIVEIS         |\n"); printf("+------------------------------------------+\n");
printf("\nOBS: claras, acucar refinado, chocolate e creme de leite o ideal e nao trocar."); printf("\nPossui farinha de amendoas [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
printf("\nPossui acucar de confeiteiro [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
combo = (falta1 * 2) + (falta2 * 3);
			switch (combo){
				case 5: {
M1 ();
					break;
				}
				case 2: {
printf("\nAcucar de confeiteiro ---> use acucar refinado bem triturado e peneirado.\n"); M2 ();
					break;
				}
				case 3: {
printf("\nFarinha de amendoas ---> use farinha de castanha de caju na mesma quantidade.\n"); M3 ();
					break;
				}
				case 0: {
printf("\nFarinha de amendoas ---> use farinha de castanha de caju na mesma quantidade."); printf("\nAcucar de confeiteiro ---> use acucar refinado bem triturado e peneirado.\n"); M0 ();
					break;
				}
			}
			break;
		}
		case 0: {
M1 ();
			break;
		}
	}
}

void M_tail(){
int faltachocbranco, faltacreme, combomerengue; etapa("\n2 - Bata as claras na batedeira ate comecarem a formar espuma.\n "); etapa("\n3 - Acrescente o acucar refinado aos poucos, batendo ate formar um merengue firme e brilhante.\n "); etapa("\n4 - Se quiser, adicione algumas gotas de corante em gel.\n "); etapa("\n5 - Acrescente a mistura reservada ao merengue.\n "); etapa("\n6 - Misture delicadamente, fazendo movimentos de baixo para cima, ate a massa ficar lisa e cair da espatula formando uma especie de \"fita\".\n "); etapa("\n7 - Coloque a massa em um saco de confeitar e faca pequenos circulos em uma assadeira forrada com papel-manteiga ou tapete de silicone.\n ");
etapa("\n8 - Bata levemente a assadeira sobre a bancada para retirar as bolhas de ar.\n "); etapa("\n9 - Deixe os macarons descansarem por 30 a 60 minutos, ate formar uma pelicula seca na superficie.\n "); etapa("\n10 - Asse em forno preaquecido a 150 °C por aproximadamente 12 a 15 minutos.\n "); printf("11 - Deixe esfriar completamente antes de retirar da assadeira.\n"); printf("\nPossui chocolate branco [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltachocbranco);
printf("\nPossui creme de leite [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltacreme);
combomerengue = (faltachocbranco * 2) + (faltacreme * 3); printf("\nRECHEIO:\n");
	switch (combomerengue){
		case 5: {
printf("1. Derreta o chocolate branco.\n"); printf("2. Acrescente o creme de leite e misture ate ficar bem liso.\n");
			break;
		}
		case 3: {
printf("\nChocolate branco ---> use chocolate ao leite (o recheio fica com sabor mais intenso).\n"); printf("1. Derreta o chocolate ao leite.\n"); printf("2. Acrescente o creme de leite e misture ate ficar bem liso.\n");
			break;
		}
		case 2: {
printf("\nCreme de leite ---> use nata (a textura pode mudar um pouco).\n"); printf("1. Derreta o chocolate branco.\n"); printf("2. Acrescente a nata e misture ate ficar bem liso.\n");
			break;
		}
		case 0: {
printf("\nChocolate branco ---> use chocolate ao leite (o recheio fica com sabor mais intenso)."); printf("\nCreme de leite ---> use nata (a textura pode mudar um pouco).\n"); printf("1. Derreta o chocolate ao leite.\n");
printf("2. Acrescente a nata e misture ate ficar bem liso.\n");
			break;
		}
	}
printf("3. Leve a geladeira ate ganhar consistencia.\n"); printf("4. Coloque o recheio em um saco de confeitar e recheie uma casquinha, fechando com outra.\n"); printf("Agora e so aproveitar seus macarons!!!!\n");
}

void M1(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Peneire a farinha de amendoas junto com o acucar de confeiteiro. Reserve.\n "); M_tail();
}

void M2(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Peneire a farinha de amendoas junto com acucar refinado bem triturado e peneirado. Reserve.\n "); M_tail();
}

void M3(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Peneire a farinha de castanha de caju junto com o acucar de confeiteiro. Reserve.\n "); M_tail();
}

void M0(){
cabecalho("MODO DE PREPARO"); printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");
etapa("\n1 - Peneire a farinha de castanha de caju junto com acucar refinado bem triturado e peneirado. Reserve.\n "); M_tail();
}
