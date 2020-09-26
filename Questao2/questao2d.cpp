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
        info.notaFinal[i] = notaFinal(info.av1[i], info.av2[i], info.mediaTrabalho[i]);
    }

    system("cls");

    int indice; float maior = -1;

    for (int i = 0; i < TOTALUNO; i++)
    {
        if (info.notaFinal[TOTALUNO - i] > maior)
        {
            maior = info.notaFinal[TOTALUNO - i];
            indice = (TOTALUNO - i);
        }
    }

    return 0;
}