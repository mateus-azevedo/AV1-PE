#include<iostream>
#include <stdlib.h>
#define NOTA 10
#define ALUNO 5
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

void verificaAluno(int aluno[ALUNO])
{
    system("cls");

    cout<<"\tRESULTADO DOS ALUNOS\n"<<endl;

    for(int i = 0; i < ALUNO; i++)
    {
        if (aluno[i] >= 7)
            printf("A nota do aluno %d foi %d, APROVADO\n", i+1, aluno[i]);
        else
            printf("A nota do aluno %d foi %d, REPROVADO\n", i+1, aluno[i]);
    }
}

int main()
{
    char gabarito[NOTA];
    char resposta[ALUNO][NOTA];

    for (int i = 0; i < NOTA; i++)
    {
        cout<<"Entre com o gabarito da Questao "<< i + 1 <<": ";
        cin>>gabarito[i];
    }

    for (int i = 0; i < ALUNO; i++)
    {
        cout<<"\nAluno "<<i + 1<<endl;
        for (int j = 0; j < NOTA; j++)
        {
            printf("Digite a respota da questao %d: ", j + 1);
            scanf(" %c", &resposta[i][j]);
        }
    }

    int alunoAcerto[ALUNO];

    for (int i = 0; i < ALUNO; i++)
    {
        int acerto = 0;

        for(int j = 0; j < NOTA; j++)
            if (resposta[i][j] == gabarito[i])
                acerto++;

        alunoAcerto[i] = acerto;
    }

    verificaAluno(alunoAcerto);

    return 0;
}
