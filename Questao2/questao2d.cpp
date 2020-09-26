#include<iostream>
#include<stdlib.h>
using namespace std;
#define TOTALUNO 1

/*
    São 5 alunos, ou seja, 5 linhas no meu vetor

    1. Coluna: número de matrícula (use um inteiro)
    2. Coluna: Avaliação 1
    3. Coluna: Avaliação 2
    4. Coluna: Média dos trabalhos
    5. Coluna: Nota final

    Ler as 4 primeiras colunas
*/

struct dadosaluno{
    int matricula[TOTALUNO];
    float av1[TOTALUNO], av2[TOTALUNO], mediaTrabalho[TOTALUNO], notaFinal[TOTALUNO];
};

float notaFinal(float av1, float av2, float trab)
{
    return ((((av1 + av2) / 2) + trab) / 2);
}

int main()
{
    struct dadosaluno info;
    
    for (int i = 0; i < TOTALUNO; i++)
    {
        cout<<"\nMatricula: "; cin>>info.matricula[i]; 
        cout<<"AV1: "; cin>>info.av1[i];
        cout<<"AV2: "; cin>>info.av2[i];
        cout<<"Media do Trabalho: "; cin>>info.mediaTrabalho[i];
    }

    system("cls");

    for (int i = 0; i < TOTALUNO; i++)
    {
        cout<<"\n\nMatricula: "<<info.matricula[i]<<endl;
        cout<<"AV1: "<<info.av1[i]<<endl; 
        cout<<"AV2: "<<info.av2[i]<<endl; 
        cout<<"Media do Trabalho: "<<info.mediaTrabalho[i]<<endl; 

        info.notaFinal[i] = notaFinal(info.av1[i], info.av2[i], info.mediaTrabalho[i]);

        cout<<"Nota Final: "<<info.notaFinal[i]; 
    }

    return 0;
}