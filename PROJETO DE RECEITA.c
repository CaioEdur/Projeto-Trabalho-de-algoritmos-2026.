#include <stdio.h>
#include <stdlib.h>

void P0 (){ //COMECO SESSAO DO PAO=================================================================================================================================
	
	int prosseguir; //COMPLEMENTO
	printf("\n4 - Sove a massa coloque sobre uma bancada enfarinhada e sove por aproximadamente 10 a 15 minutos, até ficar lisa, macia e elástica.\n ");
	scanf("%d", &prosseguir);
	
	printf("\n5 - Primeiro descanso coloque a massa em uma tigela, cubra e deixe descansarr por aprooximadamente 40 a 60 minutos, ou até crescer bem.\n ");
	scanf("%d", &prosseguir);
	
	printf("6 - Modele os paes divide a massa em pedaços de aproximadamente 60-70g. Abra cada pedaço, enrole bem apertadinho e deixe no formato do pão frances.\n ");
	scanf("%d", &prosseguir);
	
	printf("7 - Segundo descanso coloque os paes em uma assadeira, cubra e deixe descansar por mais 30-40minutos.\n ");
	scanf("%d", &prosseguir);
	
	printf("8 - Faça os cortes com uma faca bem afiada ou lamina, faça um corte comprido e superficial na parte de cima de cada pao.\n ");
	scanf("%d", &prosseguir);	
	
	printf("9 - Forno preaqueça o forna a 220-240 °C. Par deixar a casquinha crocante, coloque uma pequena assadeira omága quente no fundo do forno para criar vapor\n");
	scanf("%d", &prosseguir);
	
	printf("10 - Asse por 15-20 mimuto, até os pães ficarem douradinhos.\n");
	printf("DICA: o vapor nos primeiros minutos é o que ajuda a deixar aquela casquinha crocante e brlhante, enquanto o interior fica macio.\n");
	printf("Agora e so aproveitar seus paes fresquinhos e deliciosos!!!!\n");
	
}
void P1 (){ //RECEITA COMPLETA
	
	int prosseguir;
	printf("+-------------------------------------------+\n");
    printf("|               MODO DE PREPARO             |\n");
    printf("+-------------------------------------------+\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, o acucar e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione o leite e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e o oleo misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);
	
	printf("4 - Sove a massa coloque sobre uma bancada enfarinhada e sove por aproximadamente 10 a 15 minutos, até ficar lisa, macia e elástica.\n ");
	scanf("%d", &prosseguir);
	
	printf("5 - Primeiro descanso coloque a massa em uma tigela, cubra e deixe descansarr por aprooximadamente 40 a 60 minutos, ou até crescer bem.\n ");
	scanf("%d", &prosseguir);
	
	printf("6 - Modele os paes divi a massa em pedaços de aproximadamente 60-70g. Abra cada pedaço, enrole bem apertadinho e deixe no formato do pão frances.\n ");
	scanf("%d", &prosseguir);
	
	printf("7 - Segundo descanso coloque os paes em uma assadeira, cubra e deixe descansar por mais 30-40minutos.\n ");
	scanf("%d", &prosseguir);
	
	printf("8 - Faça os cortes com uma faca bem afiada ou lamina, faça um corte comprido e superficial na parte de cima de cada pao.\n ");
	scanf("%d", &prosseguir);	
	
	printf("9 - Forno preaqueça o forna a 220-240 °C. Par deixar a casquinha crocante, coloque uma pequena assadeira omága quente no fundo do forno para criar vapor");
	scanf("%d", &prosseguir);
	
	printf("10 - Asse por 15-20 mimuto, até os pães ficarem douradinhos.\n");
	printf("DICA: o vapor nos primeiros minutos é o que ajuda a deixar aquela casquinha crocante e brlhante, enquanto o interior fica macio.\n");
	printf("Agora e so aproveitar seus paes fresquinhos e deliciosos!!!!");
	
}
void P2 (){ //CASO NÃO TENHA LEITE E ÓLEO
	
	int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, o acucar e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione a agua morna e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e a margarina/manteiga e misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);
	
	P0 ();
		
}

void P3(){ //CASO NÃO TENHA AÇUCAR
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, uma colher de chá de mel e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione o leite e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e o oleo misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0();

}

void P4(){ //CASO NÃO TENHA AÇUCAR E LEITE
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, uma colher de chá de mel e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione a água morna e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e o oleo misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0();
}

void P5(){ //CASO NÃO TENHA AÇUCAR E ÓLEO
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, uma colher de chá de mel e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione o leite e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e a margarina/manteiga e misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0();
}

void P6(){ //CASO NÃO TENHA LEITE
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, o acucar e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione a água morna e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e o oleo misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0();
}

void P7(){ //CASO NÃO TENHA ÓLEO
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, o acucar e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione o leite e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal, margarina ou manteiga e misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0();
}

void P8(){ //CASO NÃO TENHA AÇUCAR, LEITE E ÓLEO
    int prosseguir;
	printf("\nMODO DE PREPARO\n");
	printf("\nOBS: Use o digito 1 para o check de etapa, para dar prosseguimento\n");
	
	printf("1 - Misture os ingredientes secos, em uma tigela coloque a\n farinha, o fermento, use uma colher de chá de mel e o melhorador case opte por usa-lo.\n ");
	scanf("%d", &prosseguir);
	
	printf("2 - Adicione a agua morna e misture.\n ");
	scanf("%d", &prosseguir);
	
	printf("3 - Acrescente o sal e a margarina/manteiga e misture até formar uma massa.\n ");
	scanf("%d", &prosseguir);

    P0 ();
}
void RE1 (){
		
    printf("+------------------------------------------+\n");
    printf("|                  PAO                     |\n");
    printf("+------------------------------------------+\n");
		
	int primeiraresposta, falta1 , falta2 , falta3 , combo;
		
	printf("\nIngredientes: ");
	
	printf("\n1 - 500g de farinha de trigo");
	printf("\n2 - 10g de fermento biologico seco");
	printf("\n3 - 10g de sal");
	printf("\n4 - 10g de acucar");
	printf("\n5 - 300ml de leite");
	printf("\n6 - 20ml de margarina");
	printf("\nCaso queira - 1 colher de cha de melhorador de farinha");
		
	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);
		
		switch (primeiraresposta){
			case 1: {
					printf("\nINGREDIENTES SUBSTITUIVEIS\n");
					printf("\nOBS: o fermento e o sal não tem como substituir e a farinha de trigo o ideal é não trocar por outra.");
					
					printf("\nPossui acucar |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta1);
					printf("\nPossui oleo |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta2);
					printf("\nPossui leite |1-SIM| |0-NAO|:  ");
					scanf("%d", &falta3);	
									
					combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);
					
					switch (combo){
						case 2:{
								printf("\nOleo ---> use margarina ou manteiga na mesma quantidade.");
								printf("\nnLeite ---> pode usar agua morna para trocar o leite, use na mesma quantidade.\n");
								P2 ();
							break;
						}
						case 3:{
							 	printf("\nAcucar ---> pode retirar ou use uma colher de chá de mel.");
							 	printf("\nLeite ---> pode usar agua morna para trocar o leite, use na mesma quantidade.\n");
							 	P4 ();
							break;
						}
						case 4:{
								printf("\nAcucar ---> pode retirar ou use uma colher de chá de mel.");
								printf("\nOleo ---> use margarina ou manteiga na mesma quantidade.\n");
								P5 ();
							break;
						}
						case 5:{
								printf("\nLeite ---> pode usar agua morna para trocar o leite, use na mesma quantidade.\n");
								P6 ();
							break;
						}
						case 6:{
								printf("\nOleo ---> use margarina ou manteiga na mesma quantidade.\n");	
								P7 ();
							break;
						}
						case 7:{
								printf("\nAcucar ---> pode retirar ou use uma colher de chá de mel.\n");
								P3 ();
							break;
						}
						case 9: {
								P1 ();
							break;
						}
                        case 0: {
                            printf("\nAcucar ---> pode retirar ou use uma colher de chá de mel.");
							printf("\nOleo ---> use margarina ou manteiga na mesma quantidade.");
                            printf("\nLeite ---> pode usar agua morna para trocar o leite, use na mesma quantidade.\n");
                            P8 ();
                            break;
                        }
					}										
			break;
			}
			case 0: {
				P1 ();
			break;
			}
		}
} //FIM DA SESSAO DO PAO=================================================================================================================================
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
	
	printf("+-------------------------------------------+\n");
	printf("|            LIVRO DE RECEITAS              |\n");
	printf("+-------------------------------------------+\n");
	printf("| Escolha uma receita:                      |\n");
	printf("| 1 - Pao                                   |\n");
	printf("| 2 - (em breve)                            |\n");
	printf("| 3 - (em breve)                            |\n");
	printf("| ...                                       |\n");
	printf("| 0 - Sair                                  |\n");
	printf("+-------------------------------------------+\n");
	
	scanf("%d", &op);
	
	switch (op){
		case 1:{
			RE1 ();
			break;
		}
	}
	
	return 0;
}
