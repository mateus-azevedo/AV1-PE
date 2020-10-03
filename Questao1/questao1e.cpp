#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

int maximoDivisorComum(int x, int y)
{
  return ((x % y) == 0) ? y : maximoDivisorComum(y,(x % y));
}

int main()
{
  int num1, num2; 
  int maiorDivisorComum;

  cout<<"\tMAXIMO DIVISOR COMUM ENTRE DOIS NUMEROS"<<endl<<endl;
  cout<<"Insira o primeiro numero inteiro: "; cin>>num1;
  cout<<"Insira o segundo numero inteiro: "; cin>>num2;

  maiorDivisorComum = maximoDivisorComum(num1, num2);
  cout<<"\nO maior divisor comum entre "<<num1<<" e "<<num2<<": "<<maiorDivisorComum<<endl<<endl;

  system("pause");
  
  return 0;
}