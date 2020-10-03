#include <iostream> 
#include <stdlib.h>
using namespace std;

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

void mostraArrayChar(char *vetor, int tamanhoArray)
{
  for (int i = tamanhoArray; i >= 0; i--)
  {
    cout<<vetor + i<<endl;
  }
}

int main()
{
  char array[] = {"Percorrendo o meu Array"}; 

  mostraArrayChar(array, sizeof(array));

  return 0;
}
