#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#define max 101
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

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