// https://www.youtube.com/watch?v=31afSubf4Gk&list=PLC9E87254BD7A875B&index=2
#include <stdio.h> // biclioteca de entrada e saida de dados
#include <stdlib.h> // uso do sistema operacional


int main()
{
    // ---------------------- aula 2
    //    int A; // %d ou %i- inteiros
//    printf("Informe um valor: \n");
//    scanf("%d", &A);
//    printf("Valor digitado: %d \n",A);

    // ---------------------- aula 3
//
//    int valorInteiro = 5;       // %ii ou %d -int tem 4 bytes ou 32 bits
//
//    float ValorReal = 10.7;     // %f - 8 bytes
//
//    double valorDouble = 1 ;    // %lf - 16 bytes
//
//    char Letra = '5';           // %c - possui 1 byte
//
//    bool variarelBool1 = false;
//    bool variarelBool2 = true;

    // ---------------------- aula 4

    int valor1, valor2, resultado;
    char operador;

    printf("Digite um valor: ");
    scanf("%d",&valor1);
    setbuf(stdin, NULL); // operacao para limpar o buffer do teclado

    printf("Digite o segundo valor: ");
    scanf("%d",&valor2);
    setbuf(stdin, NULL); // operacao para limpar o buffer do teclado

    printf("digite a operacao( +, -, * ou /): ");
    scanf("%c", &operador);
    setbuf(stdin, NULL); // operacao para limpar o buffer do teclado

    if(operador == '+'){
        resultado = valor1 + valor2;
    }
    else if(operador == '-'){
        resultado = valor1 - valor2;
    }
    else if(operador == '/'){
        resultado = valor1 / valor2;
    }
    else if(operador == '*'){
        resultado = valor1 * valor2;
    }
    else{
        printf("Operador invalido!");
    }

    printf("O resultado da operação é: %d", resultado);

    return 0;
}
