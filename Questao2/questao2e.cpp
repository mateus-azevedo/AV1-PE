#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
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
}