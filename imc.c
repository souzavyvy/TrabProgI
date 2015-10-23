#include<stdio.h>
#include<stdlib.h>


   /*
   O índice de massa corporal (IMC) de uma pessoa é calculado dividindo-se o peso
   pela sua altura ao quadrado. Quando este valor está abaixo de 19, diz-se
   que a pessoa está magra. Se este valor estiver entre 20 e 25, diz-se
   que a pessoa está com o peso ideal. Se o valor estiver entre 26 e 30
   diz-se que a pessoa está acima do peso
   e caso o valor ultrapasse o 31, diz-se que a pessoa está obesa,
   sendo a situação prejudicial para sua saúde.
   Faça um programa que leia o peso e a altura de uma pessoa e imprima
   em que situação a pessoa se encontra.
   Atenção: para uma verificação correta
   há outros fatores envolvidos, tais como sexo,
   idade e biótipo, portanto este teste é apenas para fins de exercício,
   não devendo ser usado como um teste de verdade.
   */


    int main()
{
    float p,h,imc;

    printf("Digite peso: \n");
    scanf("%f",&p);

    printf("Digite altura: \n");
    scanf("%f",&h);

    imc = p / (h*h);

    if (imc < 20)
        printf("O seu Idice de Massa Corporea e %.2f e esta magro\n", imc);
    else if (imc < 26)
        printf("O seu Indice de Massa Corporea e %.2f e voce esta no peso ideal\n", imc);
    else if (imc < 31)
        printf("O seu Indice de Massa Corporea e %.2f e voce esta acima do peso\n", imc);
    else
        printf("O seu Indice de Massa Corporea e %.2f e voce esta obeso\n", imc);


system("pause");
}