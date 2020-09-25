#include<iostream>
#include<stdlib.h>
using namespace std;
#define TOTALUNO 2

/*
    São 5 alunos, ou seja, 5 linhas no meu vetor

    1. Coluna: número de matrícula (use um inteiro)
    2. Coluna: Avaliação 1
    3. Coluna: Avaliação 2
    4. Coluna: Média dos trabalhos
    5. Coluna: Nota final

    Ler as 4 primeiras colunas
*/

struct aluno{
    int matricula[TOTALUNO];
    float av1[TOTALUNO], av2[TOTALUNO], mediaTrabalho[TOTALUNO], notaFinal[TOTALUNO];
};

int notaFinal(int av1,int av2,int trab)
{
    return ((((av1 + av2) / 2) + trab) / 2);
}

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

    aluno[0][4] = notaFinal(aluno[0][1], aluno[0][2], aluno[0][3]);

    cout<<"Nota Final: "<<aluno[0][4];
    
    return 0;
}