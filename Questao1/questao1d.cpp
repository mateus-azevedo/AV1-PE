#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#define max 101
using namespace std;

/*  Questão 1d) Escreva uma função recursiva para inverter uma string usando recursão. Exemplo: String: codigo Saída: ogidoc    */

void inverter(char p[]){
    if(*p!='\0'){
        inverter(p+1);
        cout<<*p;
    }
}

main(){
    char palavra[max];
    
    cout<<"INSIRA UMA PALAVRA: "; cin>>palavra;
    cout<<endl;
    cout<<"PALAVRA INVERTIDA:"<<endl;
    inverter(palavra);
}