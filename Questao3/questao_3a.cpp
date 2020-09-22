#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

/*Questão 3a) Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz*/

main(){
    float matriz[3][3];
    int i, j;

    for(i=0; i<3; i++){
        cout<<endl;
        for(j=0; j<3; j++){
            cout<<"["<<i<<"]["<<j<<"]: "<<&matriz[i][j];
        }
    }
}