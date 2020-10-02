#include <iostream>
#include <stdlib.h>
using namespace std;

int maximoDivisorComum(int x, int y)
{
  if((x % y) == 0)
		return y;
  else
		return maximoDivisorComum(y,(x % y));
}

int main()
{
  int num1 = 18, num2 = 24;
  int maiorDivisorComum;

  maiorDivisorComum = maximoDivisorComum(num1, num2);
  cout<<"O maior divisor: "<<maiorDivisorComum;
  
  return 0;
}