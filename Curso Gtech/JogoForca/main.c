#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char letra;
char PALAVRA[10];
int palavra = 0;
int i, j, k, l;
int erros ;
int main()

{   // banco de palavras
    char banco[10][10]={"cavalo","cachorro"};
    //gerar numero aleatorio pra escolher a palavra
    srand(time(NULL));
    palavra = rand()% 4;

    // o for imprime cada letra da palavra
    for(i=0;i<20;i++){
        //printf("%c", banco[palavra][i]);//imprime cada letra da matriz
        PALAVRA[i] = banco[palavra][i];//copiar linha da matrix pro vetor
        }
    //printf("\nPalavra:%s",PALAVRA);

    while(erros<6){
        printf("Digite um nome:\n");
        scanf("%c", &letra);
        setbuf(stdin, NULL);//limpar buffer do teclado
        letra = strchr(PALAVRA, letra)
//         for(j=0;j<20;j++){
//            if(banco[palavra][j]==letra){
//                printf("achou");
//            }
//         }
        erros++;
     }



    //system("pause");
    return 0;
}

/*
https://wagnergaspar.com/procurando-caracteres-em-uma-string-com-as-funcoes-strchr-e-strrchr/#:~:text=Procurando%20caracteres%20em%20uma%20String%20com%20as%20fun%C3%A7%C3%B5es%20strchr()%20e%20strrchr(),-Wagner%20Gaspar&text=A%20biblioteca%20string.,ou%20NULL%20caso%20n%C3%A3o%20encontre.

https://universestudio.wordpress.com/2015/02/18/jogo-da-forca-em-c-com-dev-c/
*/
