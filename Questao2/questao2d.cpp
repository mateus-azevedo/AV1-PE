#include<iostream>
#include<stdlib.h>
using namespace std;
#define TOTALUNO 5

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

    int indice; float maior = -1, mediaNotasFinais = 0;

    for (int i = 0; i < TOTALUNO; i++)
    {
        mediaNotasFinais = mediaNotasFinais + info.notaFinal[i];
        
        if (info.notaFinal[TOTALUNO - i] > maior)
        {
            maior = info.notaFinal[TOTALUNO - i];
            indice = (TOTALUNO - i);
        }
    }

    mediaNotasFinais = (mediaNotasFinais / TOTALUNO);

    cout<<"\t\tMELHOR ALUNO\n\tMATRICULA: "<<info.matricula[indice]<<"\n\tNOTA FINAL: "<<info.notaFinal[indice]<<endl<<endl;
    cout<<"MEDIA ARITMETICA DAS NOTAS FINAIS DOS ALUNOS: "<<mediaNotasFinais<<endl<<endl;

    system("pause");

    return 0;
}