#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

main()
{
    float matriz[3][6], somaPares = 0, media = 0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "Insira um valor real para a posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            cout << endl;
        }
    }

    for (int i = 0; i < 3; i++)
        for (j = 0; j < 6; j++)
        {
            if (j == 0 || j == 2 || j == 4)
                somaPares = somaPares + matriz[i][j];

            if (j == 1 || j == 3)
                media = media + matriz[i][j];
        }
    
    media = media / 6;


    for (i = 0; i < 3; i++)
    {
        matriz[i][5] = matriz[i][1] + matriz[i][2];
    }

    system("cls");

    cout << "SOMA DOS ELEMENTOS DAS COLUNAS PARES: " << somaPares << endl << endl;
    cout << "MEDIA DOS ELEMENTOS DA SEGUNDA E QUARTA COLUNA: " << media << endl << endl;
    cout << "MATRIZ MODIFICADA:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "[" << i << "][" << j << "]: " << matriz[i][j];
            cout << endl;
        }
    }
}