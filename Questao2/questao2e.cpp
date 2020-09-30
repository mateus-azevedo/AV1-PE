#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

main(){
    float matriz[3][6], somaPares, media;
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<6; j++){
            cout<<"Insira um valor real para a posicao ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
            cout<<endl;
        }
    }

    somaPares = matriz[0][0] + matriz[0][2] + matriz[0][4] + matriz[1][0] + matriz[1][2] + matriz[1][4] + matriz[2][0] + matriz[2][2] + matriz[2][4];

    media = ((matriz[0][1] + matriz[0][3])+(matriz[1][1] + matriz[1][3])+(matriz[2][1] + matriz[2][3]))/6;

    for(i=0; i<3; i++){
        matriz[i][5] = matriz[i][1] + matriz[i][2];
    }

    system("cls");

    cout<<"SOMA DOS ELEMENTOS DAS COLUNAS PARES: "<<somaPares<<endl<<endl;
    cout<<"MEDIA DOS ELEMENTOS DA SEGUNDA E QUARTA COLUNA: "<<media<<endl<<endl;
    cout<<"MATRIZ MODIFICADA:"<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<6; j++){
            cout<<"["<<i<<"]["<<j<<"]: "<<matriz[i][j];
            cout<<endl;
        }
    }
}