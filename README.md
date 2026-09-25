# Projeto-Trabalho-de-algoritmos-2026.

Livro de Receitas em C

Programa em C que apresenta um menu com 8 receitas (Pão, Bolo de Cenoura, Cueca Virada, Bolo de Laranja, Pão de Queijo, Bauru, Macarons e Torta de Maçã). Para cada receita, o programa pergunta se o usuário tem todos os ingredientes e, se faltar algum, indica um substituto e ajusta o modo de preparo automaticamente.

Definição e complexidade do problema

Muitas vezes o usuário quer fazer uma receita mas não tem todos os ingredientes em casa. O problema é: como guiar o usuário pela receita mesmo quando falta algum ingrediente, indicando o substituto certo e adaptando o modo de preparo?

A dificuldade aumenta porque cada receita pode ter mais de um ingrediente substituível ao mesmo tempo (ex.: pode faltar açúcar, óleo e leite juntos), então é preciso tratar todas as combinações possíveis de faltas, não só uma por vez.

## Solução proposta

Para cada ingrediente que pode faltar, o usuário responde com 1 (tem) ou 0 (não tem). Essas respostas são combinadas em uma única variável "combo", multiplicando cada resposta por um número diferente (2, 3, 4...) e somando:
/*
combo = (falta1 * 2) + (falta2 * 3) + (falta3 * 4);
*/

Esse valor final é único para cada combinação de faltas, e um "switch(combo)" decide qual função de modo de preparo chamar. Assim, em vez de vários "if" encadeados, o programa usa esse cálculo para saber exatamente o que está faltando e ajustar a receita.

Passos que não mudam (independente do ingrediente substituído) ficam em funções separadas, reaproveitadas por todas as variações da mesma receita, para não repetir código.

Apresentação da funcionalidade dos módulos

- main(): mostra o menu e chama a receita escolhida.
- cabecalho(): imprime o título "Modo de Preparo" formatado.
- RE1 a RE8: uma função por receita. Mostra os ingredientes, pergunta o que falta e calcula o "combo".
- Funções P, C, V, L, Q, B, M, T (numeradas de acordo com o "combo"): cada uma imprime o modo de preparo já adaptado para a combinação de ingredientes faltantes daquela receita.
- Funções auxiliares (como P0, C_mid, C_tail, V_tail, L_intro, L_tail, etc.): guardam os passos que são iguais em todas as variações de uma receita, evitando repetir código.

Completude dos quesitos solicitados

- As 8 receitas pedidas estão implementadas, com ingredientes e modo de preparo completo.
- Todas as receitas têm sistema de substituição de ingredientes, cobrindo as combinações de faltas.
- O programa tem menu inicial para escolher a receita.

Assimilação do conteúdo disciplinar

O projeto usa: funções (void), estruturas de decisão (switch/case), variáveis para controle de fluxo, entrada e saída de dados (scanf/printf), e uma técnica simples de combinar respostas booleanas em um número único para simplificar as condições.
