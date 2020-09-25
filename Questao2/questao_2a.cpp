#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

/*  Questão 2 – a) Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento (número e posição) e o menor elemento (número e posição)   */

main(){
    int vetor[10], maior=0, menor=1000000 /*#ExtremeGoHorse*/, i, ind_maior, ind_menor;
    
    cout<<" ----- LEITURA ----- "<<endl;
    cout<<endl;
    for(i=0;i<10;i++){                          /*leitura dos núm em cada posição do vetor usando for pra alterar o índice*/
        cout<<"INSIRA O "<<i+1<<" VALOR: ";
        cin>>vetor[i];
        if(vetor[i]>maior){                     /*verificação de maior núm e caso seja true armazenamento dele e de seu índice*/
            maior=vetor[i];
            ind_maior=i;
        }
        if(vetor[i]<menor){                     /*verificação de menor núm e caso seja true armazenamento dele e de seu índice*/
            menor=vetor[i];
            ind_menor=i;
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<" ----- ESCRITA ----- "<<endl;
    cout<<endl;
    cout<<"VALORES INFORMADOS: "<<endl;
    for(i=0;i<10;i++){                          /*utilização do for pra escrita do vetor*/
        cout<<"     "<<vetor[i];
    }
    cout<<endl;
    cout<<"MAIOR VALOR: "<<maior<<" - POSICAO: "<<ind_maior<<endl;      /*impressão do maior e menor núm e seus índices*/
    cout<<"MENOR VALOR: "<<menor<<" - POSICAO: "<<ind_menor;
}