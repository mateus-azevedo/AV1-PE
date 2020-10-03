#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

int soma(int n){
    if(n==0)                                    //controle de parada
        return n; 
    else if(n%2==0)                             //soma se o valor for par
        return (n + soma(n-2));
    else                                        //soma se o valor for ímpar
        return (n-1 + soma(n-3)); 
}

main(){
    int num;
    cout<<"Insira um valor inteiro: "; cin>>num;
    cout<<endl;
    cout<<"Soma dos valores pares a partir do 0 ate o valor informado: "<<soma(num);
}