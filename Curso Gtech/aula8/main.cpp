
#include <iostream>
//https://www.youtube.com/watch?v=keehXlLnk24&list=PLC9E87254BD7A875B&index=8

using namespace std;
int matrix[5][5]; // tamanho da matriz
int i, j; // indices de linha e coluna

int main()
{
    for(i=0;i<5;i++){
        for(j = 0; j< 5; j++){
            printf("digite um valor: ");
            scanf("%d",&matrix[i][j]);
            }
    }
    for(i=0;i<5;i++){
        for(j = 0; j< 5; j++){
            printf(" %d", matrix[i][j]);
            }
            printf("\n");
    }
    return 0;
}
