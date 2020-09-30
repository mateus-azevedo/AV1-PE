#include<iostream>
#include <stdlib.h>
#define NOTA 10
#define ALUNO 5
using namespace std;

void verificaAluno(int aluno[ALUNO])
{
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
    char gabarito[NOTA] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    char resposta[ALUNO][NOTA];

    for (int i = 0; i < ALUNO; i++)
    {
        cout<<"Aluno "<<i + 1<<endl;
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