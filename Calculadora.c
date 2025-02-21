//inclusão das bibliotecas para uso de funções e declarações específicas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//declarações de funções para adição, subtração, multiplicação e divisão, respectivamente
//Uso de declarações de funções e variáveis em float para maior interatividade com os tipos de algoritmos matemáticos

float add(float n1, float n2);
float sub(float n1, float n2);
float multi(float n1, float n2);
float divi(float n1, float n2);

int main(void) {

    //seleciona a linguagem para portugues, para uso de caracteres especiais
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opc;
    float num1, num2, res;

    printf("Selecione a operação desejada:\n1.Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\n");
    scanf("%i", &opc);

    printf("Digite o primeiro número para a operação desejada: ");
    scanf("%f", &num1);

    printf("Digite o segundo número para a operação desejada: ");
    scanf("%f", &num2);

    //Verificações de seleção de operação a ser realizada
    if(opc == 1) {
        res = add(num1, num2);
    } else if (opc == 2) {
        res = sub(num1, num2);
    } else if (opc == 3) {
        res = multi(num1, num2);
    } else if (opc == 4) {
        res = divi(num1, num2);
    } else {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("O resultado é igual a: %.2f", res);

    return 0;
}

//função de soma
float add(float n1, float n2) {
    return n1 + n2;
}

//função de subtração
float sub(float n1, float n2) {
    return n1 - n2;
}

//função de multiplicação
float multi(float n1, float n2) {
    return n1 * n2;
}

//função de divisão
float divi(float n1, float n2) {
    if (n2 == 0) {  //verifiação para prevenir algum engraçadinho de dividir por zero
        printf("REGRA Nº1: NÃO DIVIDIRÁS POR ZERO");
        return 0;
    }
    return n1 / n2;
}
