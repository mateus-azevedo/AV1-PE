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

struct dadosaluno{
    int matricula[TOTALUNO];
    float av1[TOTALUNO], av2[TOTALUNO], mediaTrabalho[TOTALUNO], notaFinal[TOTALUNO];
};

int notaFinal(int av1, int av2, int trab)
{
    return ((((av1 + av2) / 2) + trab) / 2);
}

int main()
{
    struct dadosaluno info;
    
    for (int i = 0; i < TOTALUNO; i++)
    {
        cout<<"Matricula: "; cin>>info.matricula[i]; 
        cout<<"AV1: "; scanf("%f", &info.av1[i]); //cin>>info.av1[i];
        cout<<"AV2: "; scanf("%f", &info.av2[i]); //cin>>info.av2[i];
        cout<<"Media do Trabalho: "; scanf("%f", &info.mediaTrabalho[i]); //cin>>info.mediaTrabalho[i];
    }

    system("cls");

    for (int i = 0; i < TOTALUNO; i++)
    {
        cout<<"\n\nMatricula: "<<info.matricula[i]<<endl;
        printf("AV1: %.2f", info.av1[i]); //cout<<"AV1: "<<info.av1[i]<<endl; 
        printf("\nAV2: %.2f", info.av2[i]); //cout<<"AV2: "<<info.av2[i]<<endl; 
        printf("\nMedia do Trabalho: %.2f", info.mediaTrabalho[i]); //cout<<"Media do Trabalho: "<<info.mediaTrabalho[i]<<endl; 

        info.notaFinal[i] = notaFinal(info.av1[i], info.av2[i], info.mediaTrabalho[i]);

        printf("\nNota Final: %.2f", info.notaFinal[i]); //cout<<"Nota Final: "<<info.notaFinal[i]; 
    }

    return 0;
}