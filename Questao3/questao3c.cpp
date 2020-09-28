#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10

int multiplicacao(int x, int y)
{
    return x * y;
}

int main()
{
    int num1[MAX], num2[MAX], resultado[MAX];

    cout<<"\tENTRE COM OS VALORES:"<<endl;
    
    for (int i = 0; i < MAX; i++)
    {
        cout<<"\nMultiplicando ("<<i+1<<"): "; cin>>num1[i];
        cout<<"Multiplicador ("<<i+1<<"): "; cin>>num2[i];

        resultado[i] = multiplicacao(num1[i], num2[i]);
    }

    system("cls");
    cout<<"\tRESULTADO DAS MULTIPLICACAO"<<endl<<endl;
    for (int i = 0; i < MAX; i++)
        cout<<"RESULTADO("<<i+1<<"): "<<resultado[i]<<" \t==>\t"<<num1[i]<<" x "<<num2[i]<<" = "<<resultado[i]<<endl;
    
    cout<<endl;
    
    system("pause");
    
    return 0;
}