#include <stdio.h>
#include <string.h>
#include "comum.h"

void etapa(const char *texto) {
int prosseguir; printf("%s", texto);
    scanf("%d", &prosseguir);
}

void cabecalho(const char *titulo) {
printf("\n+-------------------------------------------+\n");
    printf("|%*s%s%*s|\n",
           (45 - (int)strlen(titulo))/2, "",
           titulo,
(45 - (int)strlen(titulo) + 1)/2, ""); printf("+--------------------------------------------+\n");
}
