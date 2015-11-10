
#include <stdio.h>


/*
Faça um programa em C para simular um jogo de batalha naval (https://pt.wikipedia.org/wiki/Batalha_naval_(jogo)):



- Comece perguntando o nome do jogador: Fulano
- Use matrizes de 5x5 para mapear o campo com 1-bomba e 0-agua.

- Após a leitura da matriz, o jogo começa:

Entre com as coordenadas:
numero da linha : 1
numero da coluna: 2
Se tiver 1, mande a mensagem "Bomba!!" você ganhou 1 ponto
Deseja continuar ?(s/n)s
Entre com as coordenadas:
numero da linha : 1
numero da coluna: 2
Se tiver 0, mande a mensagem "Agua!!, que pena" 
Deseja continuar ?(s/n)n
Olá Fulano, você fez x pontos.

*/
int main(void)
 {
	int x, y, ponto;
	int campo[5][5], matriz[5][5];
	
	struct jogador
    {
    	char nome[50];
  	};
  	
  	struct jogador jog;
  	
	printf("Nome do Jogador: ");
	fflush(stdin);
	
	fgets(jog.nome, 50, stdin);
	
	for(x=0; x<5; x++)
    {
		for(y=0; y<5; y++)
        {
			campo[0][y] = 0;
			campo[1][y] = 1;
			campo[2][y] = 1;
			campo[x][y] = 0;
		}
	}
	
	for(x=0; x<5; x++)
    {
		for(y=0; y<5; y++)
        {
			printf("Entre com as coordenadas[%d][%d]:\n", x, y);
			scanf("%d", &matriz[x][y]);
			
			if(campo[x][y] == 1)
            {
				printf("Bomba!\n");
				ponto = ponto + 1;
			}else
            {
				printf("Agua!!\n");
			}
		}
	}

	printf("Nome do Jogador: %s", jog.nome);
	printf("Quantidade de pontos: %d", ponto);
	return 0;
}