#include <iostream>
//https://www.inf.pucrs.br/~pinho/PRGSWB/Streams/streams.html
//https://www.youtube.com/watch?v=6pqt51NA14I&list=PLC9E87254BD7A875B&index=10
using namespace std;

int main()
{


    char nome[10];
    cout << "Digite seu nome: "<< endl;
    cin.get(nome,100); // l� at� o 99� caractere ou <ENTER>
    cout <<"Nome digitado: " <<  nome << endl;
    system("pause");
    return 0;
}
