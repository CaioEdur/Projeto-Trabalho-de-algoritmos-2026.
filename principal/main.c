#include <stdio.h>
#include "../receitas/pao/pao.h"
#include "../receitas/bolo_cenoura/bolo_cenoura.h"
#include "../receitas/cueca_virada/cueca_virada.h"
#include "../receitas/bolo_laranja/bolo_laranja.h"
#include "../receitas/pao_queijo/pao_queijo.h"
#include "../receitas/bauru/bauru.h"
#include "../receitas/macarons/macarons.h"
#include "../receitas/torta_maca/torta_maca.h"

int main(int argc, char *argv[]) {
int op; printf("+-------------------------------------------+\n"); printf("|            LIVRO DE RECEITAS              |\n");
printf("+-------------------------------------------+\n");
	char *receitas[] = {"Pao", "Bolo de Cenoura", "Cueca Virada", "Bolo de Laranja",
"Pao de Queijo", "Bauru", "Macarons", "Torta de Maca"};
	void (*funcoes[])(void) = {RE1, RE2, RE3, RE4, RE5, RE6, RE7, RE8};
printf("| Escolha uma receita:                      |\n");
	for (int i = 0; i < 8; i++)
printf("| %d - %-38s |\n", i + 1, receitas[i]); printf("| 0 - Sair                                  |\n"); printf("+-------------------------------------------+\n");
	scanf("%d", &op);
	if (op >= 1 && op <= 8)
funcoes[op - 1]();
	return 0;
}
