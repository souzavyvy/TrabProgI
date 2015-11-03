
#include <stdio.h>
 
/* Faça um programa em C para desenhar um retângulo usando um código da tabela ASCII como pixel.
O programa deve pedir:
- Tamanho do largura: 6 (qualquer numero)

- Tamanho da altura: 3 (qualquer numero)

- Símbolo do pixel: * (qualquer símbolo)

Após essa entrada o programa deve exibir a seguinte saída:
Olá, meu nome eh (SeuNome) e o retangulo ficou assim:

******
*    *
******
*/
int main()
{ 

int x=0, y=0; 

int i,j; 

printf("\nInforme uma altura""\n");

scanf("%d",&x);

printf("\nInforme uma largura""\n");

scanf("%d",&y);


printf ("\nOla, meu nome e Viviane e o retangulo ficou assim:" "\n");

for(j=0; j< x; j++)
{

for(i=0; i < y; i++)
{

printf("*");

}

printf("\n");


}

return 0; 

}
