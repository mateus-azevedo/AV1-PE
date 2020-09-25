#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/*Questão 1 - c) Escreva uma função recursiva para apresentar a soma de todos os números inteiros pares de zero até um número informado pelo usuário. Por exemplo: Para n = 7 a função deve retornar 0 + 2 + 4 + 6 = 12.*/

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