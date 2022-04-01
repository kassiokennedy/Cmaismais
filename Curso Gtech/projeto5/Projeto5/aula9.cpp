#include <iostream>
#include <ctype.h>

using namespace std;

main(){
    char caracter;
    // aspas simples ' ' eh para um unico caracter
    // aspas duplas " " eh para um conjunto de caracter

    //imprime na tela
    printf("Digite um caratter: ");
    //le o que o usuario digita
    scanf("%d", &caracter);
    // toupper converte as letras minusculas em maiusculas
    caracter = toupper(caracter);

    if(caracter == 'B'){
        printf("\n Digitou a letra B! \n");
    }
    else{
        printf("Digitou outro cacarter!");
    }
    return 0;
}
