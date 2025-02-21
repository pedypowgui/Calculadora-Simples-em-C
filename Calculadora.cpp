#include <iostream>
#include <iomanip> //biblioteca para usp da função serprecision - para definir número de decimais que serão exibidos na tela

//funções de cada operação
float add(float n1, float n2);
float sub(float n1, float n2);
float multi(float n1, float n2);
float divi(float n1, float n2);

float add(float n1, float n2) {
    return n1 + n2;
}

float sub(float n1, float n2) {
    return n1 - n2;
}

float multi(float n1, float n2) {
    return n1 * n2;
}

float divi(float n1, float n2) {
    if(n2 == 0) { // Verificação para ninguém diviri por 0
        std::cout << "Regra Nº1: Não dividirás por 0!!!";
        return 0;
    } else {
        return n1 / n2;
    }
}

int main() {

    float num1, num2, res;
    int opc;

    std::cout << "Selecione a operação desejada: \n1.Adição\n2.Subtração\n3.Multiplicação\n4.divisão\n";
    std::cin >> opc;

    std::cout << "Digite o primeiro número para realização da operação: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número para realização da operação: ";
    std::cin >> num2;

  //Análise da opção escolhida de operação a ser feita
    if(opc == 1) {
        res = add(num1, num2);
    } else if (opc == 2) {
        res = sub(num1, num2);
    } else if (opc == 3) {
        res = multi(num1, num2);
    } else if (opc == 4) {
        res = divi(num1, num2);
    } else {
        std::cout << "opção inválida!";
        return 0;
    }

    std::cout << std::fixed << std::setprecision(2) << "O resultado da operação escolhida é: " << res << "\n";
    
}
