#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define max 101
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

int verificar(char s[]){
    int i, cons=0;

    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]==' ');
        else
            cons++;
    }
    return cons;
}

main(){
    char string[max];

    cout<<endl;
    cout<<"INSIRA UMA PALAVRA OU UMA FRASE: "; gets(string);
    cout<<endl;
    cout<<"NUMERO DE CONSOANTES: "<<verificar(string);
    cout<<endl;
}

/*  dá pra otimizar? provavelmente. sei como fazer? não :)  */