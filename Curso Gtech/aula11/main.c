#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//https://www.youtube.com/watch?v=Dzr5ZQ2Lsi4&list=PLC9E87254BD7A875B&index=11
int main()
{   /*
    // enum serve para fazer listas enumeradas
    enum semana{domingo, segunda,terca,quarta, quinta, sexta, sabado};

    int diaSemana = segunda;
    if(diaSemana== domingo || diaSemana == sabado){
        // 0 eh o domingo e 6 o sabado
        printf("\n Dia de folga? \n");
    } else{
        printf("\n Dia de trabalho! \n");
    }
    */

    struct TipoAluno{
        //campos da struct
        int nota;
        char nome[30];
    };
    struct TipoAluno Alunos[2];

    //como acessar um dado da struct
    Alunos[0].nota=10;
    strcpy(Alunos[0].nome,"kassio");

    int i;
    for(i=0;i<2;i++){
        printf("aluno: %s - Nota: %d",Alunos[i].nome,Alunos[i].nota);
    }
    return 0;
}
