#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    int main(){
        float valor_inicial, rendimento, montante,meses_aplicacao;
        int aux;
        printf("Informe o valor a ser investido: ");
        scanf(" %f", &valor_inicial);
        printf("Informe o percentual de rendimento mensal: ");
        scanf(" %f", &rendimento);
        printf("Informe a quantidade de meses de duracao do investimento: ");
        scanf(" %f", &meses_aplicacao);

        aux=(int)meses_aplicacao;

        montante = valor_inicial * pow((1+(rendimento*0.01)),meses_aplicacao);

        printf("\nO valor investido de R$ %.2f rende para R$ %.2f ao final de %d meses\n\n",valor_inicial, montante, aux);

    return 0;
}
