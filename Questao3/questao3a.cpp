#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

main(){
    float matriz[3][3];
    int i, j;

    cout<<"          ENDERECO DE CADA POSICAO DA MATRIZ";
    for(i=0; i<3; i++){
        cout<<endl<<endl;
        for(j=0; j<3; j++){
            cout<<"["<<i<<"]["<<j<<"]: "<<&matriz[i][j]<<"    ";
        }
    }

    cout<<endl<<endl;
    system("pause");
    return 0;
}