#include<iostream>
#include<stdlib.h>
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

int main()
{
    int matriz[3][3] = {{1, -8, 5},{2, 2, 10},{20, 10, 3}}, soma[3] = {0, 0, 0}; 
    //PARA EXECUTAR O EXEMPLO DO EXERCÍCIO COMENTE DA LINHA 10 ~ LINHA 14 E EXIBIRÁ O VALOR DO VETOR DO EXEMPLO

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cout<<"Entre com o valor da Matriz["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
        }
    
    system("cls");

    cout<<"MATRIZ 3 x 3\n"<<endl;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            (j != 2) ? printf("%2d  ", matriz[i][j]) : printf("%2d\n", matriz[i][j]);

    cout<<"\nSOMA DAS COLUNAS\n"<<endl;

    for(int j = 0; j < 3; j++)
        for(int i = 0; i < 3; i++)
            soma[j] += matriz[i][j];

    for(int j = 0; j < 3; j++)
        for(int i = 0; i < 3; i++)
            (i != 2) ? printf("%2d + ", matriz[i][j]) : printf("%2d = %2d\n", matriz[i][j], soma[j]);
    
    return 0;
}