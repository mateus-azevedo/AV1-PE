#include <iostream> 
#include <stdlib.h>
using namespace std;

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
