CC=gcc
CFLAGS=-std=c99 -Wall -Wextra
SRC=principal/main.c comum/comum.c receitas/pao/pao.c receitas/bolo_cenoura/bolo_cenoura.c receitas/cueca_virada/cueca_virada.c receitas/bolo_laranja/bolo_laranja.c receitas/pao_queijo/pao_queijo.c receitas/bauru/bauru.c receitas/macarons/macarons.c receitas/torta_maca/torta_maca.c

all: livro_receitas

livro_receitas: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o livro_receitas

clean:
	rm -f livro_receitas
