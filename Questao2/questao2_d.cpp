#include<iostream>
#include<stdlib.h>
using namespace std;

/*
    São 5 alunos, ou seja, 5 linhas no meu vetor

    1. Coluna: número de matrícula (use um inteiro)
    2. Coluna: Avaliação 1
    3. Coluna: Avaliação 2
    4. Coluna: Média dos trabalhos
    5. Coluna: Nota final

    Ler as 4 primeiras colunas
*/

int main()
{
    int aluno[1][5];
    
    cout<<"Matricula: "; cin>>aluno[0][0];
    cout<<"AV1: "; cin>>aluno[0][1];
    cout<<"AV2: "; cin>>aluno[0][2];
    cout<<"Media do Trabalho: "; cin>>aluno[0][3];

    system("cls");

    cout<<"Matricula: "<<aluno[0][0]<<endl;
    cout<<"AV1: "<<aluno[0][1]<<endl;
    cout<<"AV2: "<<aluno[0][2]<<endl;
    cout<<"Media do Trabalho: "<<aluno[0][3]<<endl;
    
    return 0;
}