#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(const char *titulo) {
    printf("\n+-------------------------------------------+\n");
    printf("|%*s%s%*s|\n",
           (45 - (int)strlen(titulo))/2, "",
           titulo,
           (45 - (int)strlen(titulo) + 1)/2, "");
    printf("+-------------------------------------------+\n");
}

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
    cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

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
					printf("+------------------------------------------+\n");
				    printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
				    printf("+------------------------------------------+\n");
					printf("\nOBS: o fermento e o sal não tem como substituir e a farinha de trigo o ideal é não trocar por outra.");

					printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
					scanf("%d", &falta1);
					printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
					scanf("%d", &falta2);
					printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
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


//COMECO SESSAO BOLO DE CENOURA (re2)=================================================================================================================
void C_mid(){ //passos que nunca mudam (2,3,4)
	int prosseguir;
	printf("\n2 - Despeje a mistura em uma tigela.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente o acucar e misture.\n ");
	scanf("%d", &prosseguir);

	printf("\n4 - Adicione a farinha de trigo aos poucos, mexendo ate a massa ficar uniforme.\n ");
	scanf("%d", &prosseguir);
}

void C_tail(){ //passos finais + cobertura, nunca mudam (6,7,8 + cobertura)
	int prosseguir, quercobertura, faltachoc, faltaleite, combocob;
	printf("\n6 - Coloque em uma forma untada e enfarinhada.\n ");
	scanf("%d", &prosseguir);

	printf("\n7 - Leve ao forno preaquecido a 180°C por aproximadamente 35-45 minutos.\n ");
	scanf("%d", &prosseguir);

	printf("8 - Faca o teste do palito: se sair limpo, esta pronto.\n");

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
				printf("\nCOBERTURA:\n");
				printf("1. Coloque o acucar, o chocolate em po, a manteiga/margarina e o leite em uma panela.\n");
				break;
			}
			case 2: {
				printf("\nLeite (cobertura) ---> use agua na mesma quantidade.\n");
				printf("\nCOBERTURA:\n");
				printf("1. Coloque o acucar, o chocolate em po, a manteiga/margarina e a agua em uma panela.\n");
				break;
			}
			case 3: {
				printf("\nChocolate em po ---> use cacau em po na mesma quantidade.\n");
				printf("\nCOBERTURA:\n");
				printf("1. Coloque o acucar, o cacau em po, a manteiga/margarina e o leite em uma panela.\n");
				break;
			}
			case 0: {
				printf("\nChocolate em po ---> use cacau em po na mesma quantidade.");
				printf("\nLeite (cobertura) ---> use agua na mesma quantidade.\n");
				printf("\nCOBERTURA:\n");
				printf("1. Coloque o acucar, o cacau em po, a manteiga/margarina e a agua em uma panela.\n");
				break;
			}
		}
		printf("2. Leve ao fogo medio, mexendo sempre.\n");
		printf("3. Quando comecar a ferver e ficar levemente cremoso, desligue.\n");
		printf("4. Despeje sobre o bolo morno.\n");
	}

	printf("\nAgora e so aproveitar seu bolo de cenoura!!!!\n");
}

void C1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - No liquidificador, coloque as cenouras, os ovos e o oleo: bata ate ficar bem lisinho.\n ");
	scanf("%d", &prosseguir);
	C_mid();
	printf("\n5 - Por ultimo, coloque o fermento quimico e misture delicadamente.\n ");
	scanf("%d", &prosseguir);
	C_tail();
}

void C2(){ //CASO NAO TENHA FERMENTO QUIMICO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - No liquidificador, coloque as cenouras, os ovos e o oleo: bata ate ficar bem lisinho.\n ");
	scanf("%d", &prosseguir);
	C_mid();
	printf("\n5 - Por ultimo, coloque o bicarbonato de sodio (junto de um ingrediente acido) e misture delicadamente.\n ");
	scanf("%d", &prosseguir);
	C_tail();
}

void C3(){ //CASO NAO TENHA OLEO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - No liquidificador, coloque as cenouras, os ovos e a manteiga/margarina derretida: bata ate ficar bem lisinho.\n ");
	scanf("%d", &prosseguir);
	C_mid();
	printf("\n5 - Por ultimo, coloque o fermento quimico e misture delicadamente.\n ");
	scanf("%d", &prosseguir);
	C_tail();
}

void C0(){ //CASO NAO TENHA OLEO E FERMENTO QUIMICO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - No liquidificador, coloque as cenouras, os ovos e a manteiga/margarina derretida: bata ate ficar bem lisinho.\n ");
	scanf("%d", &prosseguir);
	C_mid();
	printf("\n5 - Por ultimo, coloque o bicarbonato de sodio (junto de um ingrediente acido) e misture delicadamente.\n ");
	scanf("%d", &prosseguir);
	C_tail();
}

void RE2 (){

	printf("+------------------------------------------+\n");
    printf("|            BOLO DE CENOURA               |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, combo;

	printf("\nIngredientes: ");
	printf("\n1 - 3 cenouras medias descascadas e picadas");
	printf("\n2 - 3 ovos");
	printf("\n3 - 1/2 xicara de oleo");
	printf("\n4 - 2 xicaras de acucar");
	printf("\n5 - 2 e 1/2 xicaras de farinha de trigo");
	printf("\n6 - 1 colher de sopa de fermento quimico em po");
	printf("\nCobertura (opcional) - acucar, chocolate em po, manteiga/margarina e leite");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: cenoura, ovos, acucar e farinha o ideal e nao trocar.");

			printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
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
					printf("\nFermento quimico ---> use bicarbonato de sodio, mas vai precisar de um ingrediente acido para funcionar.\n");
					C2 ();
					break;
				}
				case 3: {
					printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n");
					C3 ();
					break;
				}
				case 0: {
					printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.");
					printf("\nFermento quimico ---> use bicarbonato de sodio, mas vai precisar de um ingrediente acido para funcionar.\n");
					C0 ();
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
} //FIM DA SESSAO BOLO DE CENOURA==========================================================================================================================


//COMECO SESSAO CUECA VIRADA (re3)=========================================================================================================================
void V_tail(){ //passos 3 a 11, nunca mudam
	int prosseguir;
	printf("\n3 - Misture tudo ate formar uma massa.\n ");
	scanf("%d", &prosseguir);

	printf("\n4 - Coloque a massa sobre uma superficie enfarinhada e sove por alguns minutos, ate ficar lisa e sem grudar nas maos.\n ");
	scanf("%d", &prosseguir);

	printf("\n5 - Abra a massa em um rolo, deixando com aproximadamente 0,5 cm de espessura.\n ");
	scanf("%d", &prosseguir);

	printf("\n6 - Corte em tiras ou retangulos.\n ");
	scanf("%d", &prosseguir);

	printf("\n7 - Faca um pequeno corte no meio de cada pedaco.\n ");
	scanf("%d", &prosseguir);

	printf("\n8 - Passe uma das pontas pelo corte, formando o formato tradicional da cueca virada.\n ");
	scanf("%d", &prosseguir);

	printf("\n9 - Aqueca o oleo em fogo medio e frite aos poucos, virando para dourar dos dois lados.\n ");
	scanf("%d", &prosseguir);

	printf("\n10 - Retire e coloque sobre papel-folha.\n ");
	scanf("%d", &prosseguir);

	printf("\n11 - Passe ainda morno na mistura de acucar (comum ou mascavo) e canela.\n");
	printf("DICA: quanto mais fininha a massa voce abrir, mais gostosa e sequinha a cueca virada fica.\n");
	printf("Agora e so aproveitar sua cueca virada!!!!\n");
}

void V1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar, sal e fermento quimico.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e leite.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V2(){ //FALTA ACUCAR E FERMENTO (tem leite)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e bicarbonato de sodio.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e leite.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V3(){ //FALTA LEITE E FERMENTO (tem acucar)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar, sal e bicarbonato de sodio.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V4(){ //FALTA LEITE E ACUCAR (tem fermento)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e fermento quimico.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V5(){ //FALTA SO FERMENTO (tem leite e acucar)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar, sal e bicarbonato de sodio.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e leite.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V6(){ //FALTA SO ACUCAR (tem leite e fermento)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e fermento quimico.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e leite.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V7(){ //FALTA SO LEITE (tem acucar e fermento)
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar, sal e fermento quimico.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void V0(){ //FALTA LEITE, ACUCAR E FERMENTO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Em uma tigela, coloque farinha, acucar mascavo, sal e bicarbonato de sodio.\n ");
	scanf("%d", &prosseguir);
	printf("\n2 - Acrescente ovos, manteiga/margarina e agua ou leite vegetal.\n ");
	scanf("%d", &prosseguir);
	V_tail();
}

void RE3 (){

	printf("+------------------------------------------+\n");
    printf("|             CUECA VIRADA                 |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, falta3, combo;

	printf("\nIngredientes: ");
	printf("\n1 - 3 xicaras de farinha de trigo");
	printf("\n2 - 3 colheres de sopa de acucar");
	printf("\n3 - 2 ovos");
	printf("\n4 - 2 colheres de sopa de manteiga/margarina");
	printf("\n5 - 1/2 xicara de leite");
	printf("\n6 - 1 colher de sopa de fermento quimico em po");
	printf("\n7 - 1 pitada de sal");
	printf("\n8 - Oleo para fritar");
	printf("\n9 - Acucar e canela para finalizar");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: a farinha, os ovos, o sal e o oleo de fritar o ideal e nao trocar.");

			printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
			printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
			printf("\nPossui fermento quimico [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);

			combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);

			switch (combo){
				case 2: {
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.");
					printf("\nFermento quimico ---> use bicarbonato de sodio.\n");
					V2 ();
					break;
				}
				case 3: {
					printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade.");
					printf("\nFermento quimico ---> use bicarbonato de sodio.\n");
					V3 ();
					break;
				}
				case 4: {
					printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade.");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					V4 ();
					break;
				}
				case 5: {
					printf("\nFermento quimico ---> use bicarbonato de sodio.\n");
					V5 ();
					break;
				}
				case 6: {
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					V6 ();
					break;
				}
				case 7: {
					printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade.\n");
					V7 ();
					break;
				}
				case 9: {
					V1 ();
					break;
				}
				case 0: {
					printf("\nLeite ---> use agua ou leite vegetal na mesma quantidade.");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.");
					printf("\nFermento quimico ---> use bicarbonato de sodio.\n");
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
} //FIM DA SESSAO CUECA VIRADA==============================================================================================================================


//COMECO SESSAO BOLO DE LARANJA (re4)=======================================================================================================================
void L_intro(){ //passo 1, nunca muda
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);
}

void L_tail(){ //passos 3 a 9, nunca mudam
	int prosseguir, faltafarinha;
	printf("\n3 - Despeje a mistura em uma tigela.\n ");
	scanf("%d", &prosseguir);

	printf("\nDeseja deixar o bolo mais fofinho substituindo parte da farinha por amido de milho [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltafarinha);

	if (faltafarinha == 1){
		printf("\nFarinha de trigo ---> substitua 1/2 xicara da farinha por 1/2 xicara de amido de milho.\n");
		printf("\n4 - Acrescente 1 e 1/2 xicara de farinha de trigo e 1/2 xicara de amido de milho aos poucos, misturando delicadamente ate a massa ficar homogenea.\n ");
	} else {
		printf("\n4 - Acrescente a farinha de trigo aos poucos, misturando delicadamente ate a massa ficar homogenea.\n ");
	}
	scanf("%d", &prosseguir);

	printf("\n5 - Adicione as raspas de laranja (se for usar) e misture.\n ");
	scanf("%d", &prosseguir);

	printf("\n6 - Por ultimo, coloque o fermento e mexa delicadamente apenas ate incorporar.\n ");
	scanf("%d", &prosseguir);

	printf("\n7 - Despeje em uma forma untada e enfarinhada.\n ");
	scanf("%d", &prosseguir);

	printf("\n8 - Leve ao forno por aproximadamente 35 a 40 minutos, ou ate dourar e o palito sair limpo.\n ");
	scanf("%d", &prosseguir);

	printf("9 - Espere amornar antes de desenformar.\n");
	printf("Agora e so aproveitar seu bolo de laranja!!!!\n");
}

void L1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar, o oleo e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L2(){ //TEM OLEO, FALTA SUCO E ACUCAR
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, o oleo e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L3(){ //TEM SUCO, FALTA OLEO E ACUCAR
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, a manteiga/margarina derretida e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L4(){ //TEM ACUCAR, FALTA OLEO E SUCO
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar, a manteiga/margarina derretida e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L5(){ //TEM OLEO E SUCO, FALTA ACUCAR
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, o oleo e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L6(){ //TEM OLEO E ACUCAR, FALTA SUCO
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar, o oleo e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L7(){ //TEM SUCO E ACUCAR, FALTA OLEO
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar, a manteiga/margarina derretida e o suco de laranja. Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void L0(){ //FALTA OLEO, SUCO E ACUCAR
	int prosseguir;
	L_intro();
	printf("\n2 - No liquidificador, coloque os ovos, o acucar mascavo, a manteiga/margarina derretida e o leite (no lugar do suco de laranja). Bata por aproximadamente 1 minuto.\n ");
	scanf("%d", &prosseguir);
	L_tail();
}

void RE4 (){

	printf("+------------------------------------------+\n");
    printf("|            BOLO DE LARANJA               |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, falta3, combo;

	printf("\nIngredientes: ");
	printf("\n1 - 3 ovos");
	printf("\n2 - 1 xicara de acucar");
	printf("\n3 - 1/2 xicara de oleo");
	printf("\n4 - 1 xicara de suco de laranja natural");
	printf("\n5 - Raspas de 1 laranja (opcional)");
	printf("\n6 - 2 xicaras de farinha de trigo");
	printf("\n7 - 1 colher de sopa de fermento em po");
	printf("\n8 - 1 pitada de sal");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: ovos, farinha, fermento e sal o ideal e nao trocar.");

			printf("\nPossui oleo [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
			printf("\nPossui suco de laranja [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
			printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);

			combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);

			switch (combo){
				case 2: {
					printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					L2 ();
					break;
				}
				case 3: {
					printf("\nOleo ---> use manteiga/margarina derretida (100g).");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					L3 ();
					break;
				}
				case 4: {
					printf("\nOleo ---> use manteiga/margarina derretida (100g).");
					printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).\n");
					L4 ();
					break;
				}
				case 5: {
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					L5 ();
					break;
				}
				case 6: {
					printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).\n");
					L6 ();
					break;
				}
				case 7: {
					printf("\nOleo ---> use manteiga/margarina derretida (100g).\n");
					L7 ();
					break;
				}
				case 9: {
					L1 ();
					break;
				}
				case 0: {
					printf("\nOleo ---> use manteiga/margarina derretida (100g).");
					printf("\nSuco de laranja ---> use leite na mesma quantidade (o bolo fica sem sabor de laranja).");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
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
} //FIM DA SESSAO BOLO DE LARANJA===========================================================================================================================


//COMECO SESSAO PAO DE QUEIJO (re5)=========================================================================================================================
void Q_intro(){ //passo 1, nunca muda
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 200 °C.\n ");
	scanf("%d", &prosseguir);
}

void Q_tail(){ //passos 3 a 9, nunca mudam
	int prosseguir, faltapolvilho, faltaqueijo;

	printf("\nPossui os dois tipos de polvilho (doce e azedo) [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltapolvilho);

	if (faltapolvilho == 0){
		printf("\nPolvilho ---> pode fazer usando apenas um dos tipos: com o doce fica mais macio, com o azedo fica mais aerado e com sabor mais marcante.\n");
	}

	printf("\n3 - Em uma tigela grande, coloque os polvilhos.\n ");
	scanf("%d", &prosseguir);

	printf("\n4 - Despeje a mistura quente sobre os polvilhos e misture bem. Deixe amornar.\n ");
	scanf("%d", &prosseguir);

	printf("\n5 - Acrescente os ovos, um de cada vez, misturando ate incorporar.\n ");
	scanf("%d", &prosseguir);

	printf("\nPossui mucarela e queijo meia-cura conforme a receita [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltaqueijo);

	if (faltaqueijo == 0){
		printf("\nQueijo ---> pode usar somente parmesao, somente mucarela, ou uma mistura dos dois, conforme tiver disponivel.\n");
	}

	printf("\n6 - Adicione o queijo ralado e misture ate formar uma massa macia e uniforme.\n ");
	scanf("%d", &prosseguir);

	printf("\n7 - Unte levemente as maos com oleo ou manteiga e faca bolinhas.\n ");
	scanf("%d", &prosseguir);

	printf("\n8 - Coloque em uma assadeira, deixando espaco entre elas.\n ");
	scanf("%d", &prosseguir);

	printf("9 - Asse por aproximadamente 25 a 35 minutos, ate ficarem crescidos e levemente dourados.\n");
	printf("Agora e so aproveitar seu pao de queijo!!!!\n");
}

void Q1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	Q_intro();
	printf("\n2 - Em uma panela, coloque o leite, o oleo e o sal e leve ao fogo ate comecar a ferver.\n ");
	scanf("%d", &prosseguir);
	Q_tail();
}

void Q2(){ //TEM LEITE, FALTA OLEO
	int prosseguir;
	Q_intro();
	printf("\n2 - Em uma panela, coloque o leite, a manteiga/margarina derretida e o sal e leve ao fogo ate comecar a ferver.\n ");
	scanf("%d", &prosseguir);
	Q_tail();
}

void Q3(){ //TEM OLEO, FALTA LEITE
	int prosseguir;
	Q_intro();
	printf("\n2 - Em uma panela, coloque a agua, o oleo e o sal e leve ao fogo ate comecar a ferver.\n ");
	scanf("%d", &prosseguir);
	Q_tail();
}

void Q0(){ //FALTA LEITE E OLEO
	int prosseguir;
	Q_intro();
	printf("\n2 - Em uma panela, coloque a agua, a manteiga/margarina derretida e o sal e leve ao fogo ate comecar a ferver.\n ");
	scanf("%d", &prosseguir);
	Q_tail();
}

void RE5 (){

	printf("+------------------------------------------+\n");
    printf("|             PAO DE QUEIJO                |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, combo;

	printf("\nIngredientes: ");
	printf("\n1 - 2 xicaras de polvilho doce");
	printf("\n2 - 1 xicara de polvilho azedo");
	printf("\n3 - 1 xicara de leite");
	printf("\n4 - 1/2 xicara de oleo");
	printf("\n5 - 1 colher de cha de sal");
	printf("\n6 - 2 ovos");
	printf("\n7 - 2 xicaras de queijo ralado (mucarela, meia-cura ou parmesao)");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: polvilhos, sal, ovos e queijo o ideal e nao trocar.");

			printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
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
					printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n");
					Q2 ();
					break;
				}
				case 3: {
					printf("\nLeite ---> use agua na mesma quantidade.\n");
					Q3 ();
					break;
				}
				case 0: {
					printf("\nLeite ---> use agua na mesma quantidade.");
					printf("\nOleo ---> use manteiga/margarina derretida na mesma quantidade.\n");
					Q0 ();
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
} //FIM DA SESSAO PAO DE QUEIJO=============================================================================================================================


//COMECO SESSAO BAURU (re6)=================================================================================================================================
void B_intro(){ //passo 1, nunca muda
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);
}

void B_tail(){ //passos 3 a 11, nunca mudam
	int prosseguir, faltapresunto, faltamucarela, faltatomate, comborecheio, faltarequeijao, faltaoregano;
	printf("\n3 - Acrescente a farinha de trigo aos poucos e bata ate formar uma massa homogenea.\n ");
	scanf("%d", &prosseguir);

	printf("\n4 - Por ultimo, coloque o fermento e misture rapidamente.\n ");
	scanf("%d", &prosseguir);

	printf("\n5 - Unte uma forma com oleo e farinha.\n ");
	scanf("%d", &prosseguir);

	printf("\n6 - Coloque metade da massa no fundo da forma.\n ");
	scanf("%d", &prosseguir);

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
			printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado.\n");
			printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, mucarela e tomate.\n ");
			break;
		}
		case 6: {
			printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.\n");
			printf("\n7 - Faca uma camada de presunto, queijo prato/provolone/minas e tomate.\n ");
			break;
		}
		case 5: {
			printf("\nTomate ---> use tomate-cereja cortado ao meio.\n");
			printf("\n7 - Faca uma camada de presunto, mucarela e tomate-cereja.\n ");
			break;
		}
		case 4: {
			printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado.");
			printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.\n");
			printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, queijo prato/provolone/minas e tomate.\n ");
			break;
		}
		case 3: {
			printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado.");
			printf("\nTomate ---> use tomate-cereja cortado ao meio.\n");
			printf("\n7 - Faca uma camada de peito de peru/mortadela/frango, mucarela e tomate-cereja.\n ");
			break;
		}
		case 2: {
			printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.");
			printf("\nTomate ---> use tomate-cereja cortado ao meio.\n");
			printf("\n7 - Faca uma camada de presunto, queijo prato/provolone/minas e tomate-cereja.\n ");
			break;
		}
		case 0: {
			printf("\nPresunto ---> use peito de peru, mortadela ou frango desfiado.");
			printf("\nMucarela ---> use queijo prato, provolone ou queijo minas.");
			printf("\nTomate ---> use tomate-cereja cortado ao meio.\n");
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
		printf("\nRequeijao ---> use cream cheese ou catupiry.\n");
		printf("\n8 - Se quiser, espalhe um pouco de cream cheese ou catupiry por cima.\n ");
	}
	scanf("%d", &prosseguir);

	printf("\nPossui oregano [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltaoregano);

	if (faltaoregano == 1){
		printf("\n9 - Salpique oregano.\n ");
	} else {
		printf("\nOregano ---> use manjericao ou ervas finas.\n");
		printf("\n9 - Salpique manjericao ou ervas finas.\n ");
	}
	scanf("%d", &prosseguir);

	printf("\n10 - Cubra com o restante da massa.\n ");
	scanf("%d", &prosseguir);

	printf("11 - Leve ao forno por aproximadamente 35 a 45 minutos, ate ficar douradinho.\n");
	printf("Agora e so aproveitar seu bauru!!!!\n");
}

void B1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	B_intro();
	printf("\n2 - No liquidificador, bata os ovos, o leite, o oleo e o sal.\n ");
	scanf("%d", &prosseguir);
	B_tail();
}

void B2(){ //TEM LEITE, FALTA OLEO
	int prosseguir;
	B_intro();
	printf("\n2 - No liquidificador, bata os ovos, o leite, a manteiga/margarina derretida e o sal.\n ");
	scanf("%d", &prosseguir);
	B_tail();
}

void B3(){ //TEM OLEO, FALTA LEITE
	int prosseguir;
	B_intro();
	printf("\n2 - No liquidificador, bata os ovos, a agua, o oleo e o sal.\n ");
	scanf("%d", &prosseguir);
	B_tail();
}

void B0(){ //FALTA LEITE E OLEO
	int prosseguir;
	B_intro();
	printf("\n2 - No liquidificador, bata os ovos, a agua, a manteiga/margarina derretida e o sal.\n ");
	scanf("%d", &prosseguir);
	B_tail();
}

void RE6 (){

	printf("+------------------------------------------+\n");
    printf("|                  BAURU                   |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, combo;

	printf("\nIngredientes da massa: ");
	printf("\n1 - 3 ovos");
	printf("\n2 - 2 xicaras de leite");
	printf("\n3 - 1/2 xicara de oleo");
	printf("\n4 - 2 xicaras de farinha de trigo");
	printf("\n5 - 1 colher de sopa de fermento em po");
	printf("\n6 - 1 colher de cha de sal");
	printf("\nRecheio: 200g de presunto, 250g de mucarela, 2 tomates, oregano e requeijao/cream cheese (opcional)");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: ovos, farinha, fermento e sal o ideal e nao trocar.");

			printf("\nPossui leite [1]-SIM | [0]-NAO:  ");
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
					printf("\nOleo ---> use manteiga/margarina derretida (1/2 xicara).\n");
					B2 ();
					break;
				}
				case 3: {
					printf("\nLeite ---> use agua na mesma quantidade (a massa fica um pouco menos cremosa).\n");
					B3 ();
					break;
				}
				case 0: {
					printf("\nLeite ---> use agua na mesma quantidade (a massa fica um pouco menos cremosa).");
					printf("\nOleo ---> use manteiga/margarina derretida (1/2 xicara).\n");
					B0 ();
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
} //FIM DA SESSAO BAURU======================================================================================================================================


//COMECO SESSAO MACARONS (re7)===============================================================================================================================
void M_tail(){ //passos 2 a 11 das casquinhas + recheio, nunca mudam
	int prosseguir, faltachocbranco, faltacreme, combomerengue;
	printf("\n2 - Bata as claras na batedeira ate comecarem a formar espuma.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente o acucar refinado aos poucos, batendo ate formar um merengue firme e brilhante.\n ");
	scanf("%d", &prosseguir);

	printf("\n4 - Se quiser, adicione algumas gotas de corante em gel.\n ");
	scanf("%d", &prosseguir);

	printf("\n5 - Acrescente a mistura reservada ao merengue.\n ");
	scanf("%d", &prosseguir);

	printf("\n6 - Misture delicadamente, fazendo movimentos de baixo para cima, ate a massa ficar lisa e cair da espatula formando uma especie de \"fita\".\n ");
	scanf("%d", &prosseguir);

	printf("\n7 - Coloque a massa em um saco de confeitar e faca pequenos circulos em uma assadeira forrada com papel-manteiga ou tapete de silicone.\n ");
	scanf("%d", &prosseguir);

	printf("\n8 - Bata levemente a assadeira sobre a bancada para retirar as bolhas de ar.\n ");
	scanf("%d", &prosseguir);

	printf("\n9 - Deixe os macarons descansarem por 30 a 60 minutos, ate formar uma pelicula seca na superficie.\n ");
	scanf("%d", &prosseguir);

	printf("\n10 - Asse em forno preaquecido a 150 °C por aproximadamente 12 a 15 minutos.\n ");
	scanf("%d", &prosseguir);

	printf("11 - Deixe esfriar completamente antes de retirar da assadeira.\n");

	printf("\nPossui chocolate branco [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltachocbranco);
	printf("\nPossui creme de leite [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltacreme);

	combomerengue = (faltachocbranco * 2) + (faltacreme * 3);

	printf("\nRECHEIO:\n");

	switch (combomerengue){
		case 5: {
			printf("1. Derreta o chocolate branco.\n");
			printf("2. Acrescente o creme de leite e misture ate ficar bem liso.\n");
			break;
		}
		case 3: {
			printf("\nChocolate branco ---> use chocolate ao leite (o recheio fica com sabor mais intenso).\n");
			printf("1. Derreta o chocolate ao leite.\n");
			printf("2. Acrescente o creme de leite e misture ate ficar bem liso.\n");
			break;
		}
		case 2: {
			printf("\nCreme de leite ---> use nata (a textura pode mudar um pouco).\n");
			printf("1. Derreta o chocolate branco.\n");
			printf("2. Acrescente a nata e misture ate ficar bem liso.\n");
			break;
		}
		case 0: {
			printf("\nChocolate branco ---> use chocolate ao leite (o recheio fica com sabor mais intenso).");
			printf("\nCreme de leite ---> use nata (a textura pode mudar um pouco).\n");
			printf("1. Derreta o chocolate ao leite.\n");
			printf("2. Acrescente a nata e misture ate ficar bem liso.\n");
			break;
		}
	}
	printf("3. Leve a geladeira ate ganhar consistencia.\n");
	printf("4. Coloque o recheio em um saco de confeitar e recheie uma casquinha, fechando com outra.\n");
	printf("Agora e so aproveitar seus macarons!!!!\n");
}

void M1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Peneire a farinha de amendoas junto com o acucar de confeiteiro. Reserve.\n ");
	scanf("%d", &prosseguir);
	M_tail();
}

void M2(){ //TEM FARINHA DE AMENDOAS, FALTA ACUCAR DE CONFEITEIRO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Peneire a farinha de amendoas junto com acucar refinado bem triturado e peneirado. Reserve.\n ");
	scanf("%d", &prosseguir);
	M_tail();
}

void M3(){ //TEM ACUCAR DE CONFEITEIRO, FALTA FARINHA DE AMENDOAS
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Peneire a farinha de castanha de caju junto com o acucar de confeiteiro. Reserve.\n ");
	scanf("%d", &prosseguir);
	M_tail();
}

void M0(){ //FALTA FARINHA DE AMENDOAS E ACUCAR DE CONFEITEIRO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Peneire a farinha de castanha de caju junto com acucar refinado bem triturado e peneirado. Reserve.\n ");
	scanf("%d", &prosseguir);
	M_tail();
}

void RE7 (){

	printf("+------------------------------------------+\n");
    printf("|                MACARONS                  |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, combo;

	printf("\nIngredientes das casquinhas: ");
	printf("\n1 - 100g de farinha de amendoas");
	printf("\n2 - 100g de acucar de confeiteiro");
	printf("\n3 - 100g de acucar refinado");
	printf("\n4 - 100g de claras de ovo");
	printf("\n5 - Corante alimenticio em gel (opcional)");
	printf("\nRecheio: 100g de chocolate branco e 50g de creme de leite");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: claras, acucar refinado, chocolate e creme de leite o ideal e nao trocar.");

			printf("\nPossui farinha de amendoas [1]-SIM | [0]-NAO:  ");
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
					printf("\nAcucar de confeiteiro ---> use acucar refinado bem triturado e peneirado.\n");
					M2 ();
					break;
				}
				case 3: {
					printf("\nFarinha de amendoas ---> use farinha de castanha de caju na mesma quantidade.\n");
					M3 ();
					break;
				}
				case 0: {
					printf("\nFarinha de amendoas ---> use farinha de castanha de caju na mesma quantidade.");
					printf("\nAcucar de confeiteiro ---> use acucar refinado bem triturado e peneirado.\n");
					M0 ();
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
} //FIM DA SESSAO MACARONS===================================================================================================================================


//COMECO SESSAO TORTA DE MACA (re8)==========================================================================================================================
void T_mid(){ //passos 4,5,6, nunca mudam
	int prosseguir, faltamaca;
	printf("\n4 - Separe aproximadamente 1/3 da massa para fazer a cobertura.\n ");
	scanf("%d", &prosseguir);

	printf("\n5 - Forre o fundo e as laterais de uma forma com o restante da massa.\n ");
	scanf("%d", &prosseguir);

	printf("\nPossui macas [1]-SIM | [0]-NAO:  ");
	scanf("%d", &faltamaca);

	if (faltamaca == 1){
		printf("\n6 - Descasque as macas e corte em fatias finas.\n ");
	} else {
		printf("\nMaca ---> use pera na mesma quantidade.\n");
		printf("\n6 - Descasque as peras e corte em fatias finas.\n ");
	}
	scanf("%d", &prosseguir);
}

void T_tail(){ //passos 8 a 11, nunca mudam
	int prosseguir;
	printf("\n8 - Coloque o recheio (de maca ou pera) sobre a massa.\n ");
	scanf("%d", &prosseguir);

	printf("\n9 - Abra o restante da massa e coloque por cima. Voce tambem pode fazer tirinhas e montar uma cobertura trancada.\n ");
	scanf("%d", &prosseguir);

	printf("\n10 - Leve ao forno por aproximadamente 35 a 45 minutos, ate a massa ficar douradinha.\n ");
	scanf("%d", &prosseguir);

	printf("11 - Espere amornar antes de cortar.\n");
	printf("Agora e so aproveitar sua torta de maca!!!!\n");
}

void T1(){ //RECEITA COMPLETA, sem substituicao
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar, a canela, o limao e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T2(){ //TEM MANTEIGA, FALTA ACUCAR E LIMAO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar mascavo, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T3(){ //TEM ACUCAR, FALTA MANTEIGA E LIMAO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T4(){ //TEM LIMAO, FALTA MANTEIGA E ACUCAR
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar mascavo, a canela, o limao e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T5(){ //TEM MANTEIGA E ACUCAR, FALTA LIMAO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T6(){ //TEM MANTEIGA E LIMAO, FALTA ACUCAR
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a manteiga e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar mascavo, a canela, o limao e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T7(){ //TEM ACUCAR E LIMAO, FALTA MANTEIGA
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar, a canela, o limao e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void T0(){ //FALTA MANTEIGA, ACUCAR E LIMAO
	int prosseguir;
	cabecalho("MODO DE PREPARO");
	printf("\nOBS: Use o digito [1] para o check de etapa, para dar prosseguimento\n");

	printf("\n1 - Preaqueca o forno a 180 °C.\n ");
	scanf("%d", &prosseguir);

	printf("\n2 - Em uma tigela, misture a farinha, o acucar mascavo, o fermento e o sal.\n ");
	scanf("%d", &prosseguir);

	printf("\n3 - Acrescente a margarina/oleo e o ovo e misture com as maos ate formar uma massa macia.\n ");
	scanf("%d", &prosseguir);
	T_mid();
	printf("\n7 - Misture as macas com o acucar mascavo, a canela, o suco de laranja (no lugar do limao) e a farinha ou amido.\n ");
	scanf("%d", &prosseguir);
	T_tail();
}

void RE8 (){

	printf("+------------------------------------------+\n");
    printf("|             TORTA DE MACA                |\n");
    printf("+------------------------------------------+\n");

	int primeiraresposta, falta1, falta2, falta3, combo;

	printf("\nIngredientes da massa: ");
	printf("\n1 - 2 xicaras de farinha de trigo");
	printf("\n2 - 1/2 xicara de acucar");
	printf("\n3 - 100g de manteiga ou margarina");
	printf("\n4 - 1 ovo");
	printf("\n5 - 1 colher de cha de fermento em po");
	printf("\n6 - 1 pitada de sal");
	printf("\nIngredientes do recheio: 4 macas, 1/2 xicara de acucar, 1 colher de cha de canela em po, suco de 1/2 limao e 1 colher de sopa de farinha ou amido de milho");

	printf("\nCaso voce precise substituir alguns, temos alguns ingredientes que podem\nser trocados, e o seu caso? [1] - sim | [0]- nao : ");
	scanf("%d", &primeiraresposta);

	switch (primeiraresposta){
		case 1: {
			printf("+------------------------------------------+\n");
			printf("|       INGREDIENTES SUBSTITUIVEIS         |\n");
			printf("+------------------------------------------+\n");
			printf("\nOBS: farinha, ovo, fermento, sal e maca o ideal e nao trocar.");

			printf("\nPossui manteiga [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta1);
			printf("\nPossui acucar [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta2);
			printf("\nPossui limao [1]-SIM | [0]-NAO:  ");
			scanf("%d", &falta3);

			combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);

			switch (combo){
				case 2: {
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.");
					printf("\nLimao ---> use suco de laranja no lugar.\n");
					T2 ();
					break;
				}
				case 3: {
					printf("\nManteiga ---> use margarina/oleo na mesma quantidade.");
					printf("\nLimao ---> use suco de laranja no lugar.\n");
					T3 ();
					break;
				}
				case 4: {
					printf("\nManteiga ---> use margarina/oleo na mesma quantidade.");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					T4 ();
					break;
				}
				case 5: {
					printf("\nLimao ---> use suco de laranja no lugar.\n");
					T5 ();
					break;
				}
				case 6: {
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.\n");
					T6 ();
					break;
				}
				case 7: {
					printf("\nManteiga ---> use margarina/oleo na mesma quantidade.\n");
					T7 ();
					break;
				}
				case 9: {
					T1 ();
					break;
				}
				case 0: {
					printf("\nManteiga ---> use margarina/oleo na mesma quantidade.");
					printf("\nAcucar ---> use acucar mascavo na mesma quantidade.");
					printf("\nLimao ---> use suco de laranja no lugar.\n");
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
} //FIM DA SESSAO TORTA DE MACA==============================================================================================================================


int main(int argc, char *argv[]) {

	int op;

	printf("+-------------------------------------------+\n");
	printf("|            LIVRO DE RECEITAS              |\n");
	printf("+-------------------------------------------+\n");
	printf("| Escolha uma receita:                      |\n");
	printf("| 1 - Pao                                   |\n");
	printf("| 2 - Bolo de Cenoura                       |\n");
	printf("| 3 - Cueca Virada                          |\n");
	printf("| 4 - Bolo de Laranja                       |\n");
	printf("| 5 - Pao de Queijo                         |\n");
	printf("| 6 - Bauru                                 |\n");
	printf("| 7 - Macarons                              |\n");
	printf("| 8 - Torta de Maca                         |\n");
	printf("| 0 - Sair                                  |\n");
	printf("+-------------------------------------------+\n");

	scanf("%d", &op);

	switch (op){
		case 1:{
			RE1 ();
			break;
		}
		case 2:{
			RE2 ();
			break;
		}
		case 3:{
			RE3 ();
			break;
		}
		case 4:{
			RE4 ();
			break;
		}
		case 5:{
			RE5 ();
			break;
		}
		case 6:{
			RE6 ();
			break;
		}
		case 7:{
			RE7 ();
			break;
		}
		case 8:{
			RE8 ();
			break;
		}
	}

	return 0;
}
