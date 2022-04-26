#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://www.youtube.com/watch?v=Dzr5ZQ2Lsi4&list=PLC9E87254BD7A875B&index=11

enum dias{domingo = 1, segunda,terca,quarta, quinta, sexta, sabado};
int dias =2 ;

int main()
{
    /*
    //----------  Enum -------------------------c

    // enum serve para fazer listas enumeradas
    if (dias==1 || dias==7){
        printf("\nDia de folga!");
    }else{
        printf("\nDia de trabalhar!");
    }
    */
    //----------  Struct -------------------------

    struct TipoAluno{
        //campos da struct
        int nota;
        char nome[30];
    };
    struct TipoAluno Alunos[2];

    //como acessar um dado da struct
    Alunos[0].nota=10;
    strcpy(Alunos[0].nome,"kassio");//strcpy copia de uma string pra outra

    Alunos[1].nota=9.5;
    strcpy(Alunos[1].nome,"Jose");//strcpy copia de uma string pra outra

    Alunos[2].nota=9.5;
    strcpy(Alunos[2].nome,"Joao");//strcpy copia de uma string pra outra
    int i;
    for(i=0;i<=Alunos;i++){
        printf("\nAluno: %s - Nota: %d",Alunos[i].nome,Alunos[i].nota);
    }

    return 0;
}
