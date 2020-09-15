#include<iostream>
#include<stdlib.h>
using namespace std;

int verificaPrimo(int x)
{
    if ((x % 2) == 0)
    {
        cout<<x<<" e divisivel por 2"<<endl;
        return 0;
    }
    else if ((x % 3) == 0)
    {
        cout<<x<<" e divisivel por 3"<<endl;
        return 0;
    }
    else if ((x % 5) == 0)
    {
        cout<<x<<" e divisivel por 5"<<endl;
        return 0;
    }
    else if ((x % 7) == 0)
    {
        cout<<x<<" e divisivel por 7"<<endl;
        return 0;
    }
    else
        return 1;
}

int main()
{
    int num;

    cout<<"Numero: "; cin>>num;

    if (verificaPrimo(num) == 1 )
        cout<<"Verdadeiro";
    else
        cout<<"Falso";
    
    return 0;
}