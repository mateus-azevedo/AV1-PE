#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

float somaColunaUmDois(float vetor[][6], int i)
{
    return vetor[i][1] + vetor[i][2];
}

main()
{
    float matriz[3][6] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6}, somaPares = 0, media = 0;
    int i, j;

    // for (i = 0; i < 3; i++)
    // {
    //     cout << "\n\tVALORES LINHA "<<i + 1<<endl<<endl;
        
    //     for (j = 0; j < 6; j++)
    //     {
    //         cout << "Insira o valor real "<< j + 1 <<" para a linha "<< i + 1 <<" : ";
    //         cin >> matriz[i][j];
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0 || j == 2 || j == 4)
                somaPares = somaPares + matriz[i][j];

            if (j == 1 || j == 3)
                media = media + matriz[i][j];
        }

        matriz[i][5] = somaColunaUmDois(matriz, i);
    }
    
    media = media / 6;

    system("cls");

    cout << "\nSOMA DOS ELEMENTOS DAS COLUNAS PARES: " << somaPares << endl << endl;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0 || j == 2 || j == 4)
            {
                cout<<matriz[i][j]<<" + ";
            }
        }
    }

    cout<<endl;
    
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0 || j == 2 || j == 4)
            {
                cout<<matriz[i][j]<<" + ";
            }
        }
        
        for (j = 0; j < 6; j++)
        {
            if (j == 0 || j == 2 || j == 4)
            {
                cout << "[" << i << "][" << j << "]: " << matriz[i][j];
                cout << "\t";
            }
        }
        cout << endl;
    }

    cout << "\nMEDIA DOS ELEMENTOS DA SEGUNDA E QUARTA COLUNA: " << media << endl << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == 1 || j == 3)
            {
                cout << "[" << i << "][" << j << "]: " << matriz[i][j];
                cout << "\t";
            }
        }
        cout << endl;
    }

    cout << "\nMATRIZ MODIFICADA:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "[" << i << "][" << j << "]: " << matriz[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}