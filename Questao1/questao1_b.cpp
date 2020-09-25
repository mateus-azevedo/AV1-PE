#include<iostream>
#include<stdlib.h>
#include<stdbool.h>

using namespace std;

bool verificaPrimo(int x)
{
    if ((x % 2) == 0)
    {
        cout<<endl<<x<<" e divisivel por 2"<<endl;
        return false;
    }
    else if ((x % 3) == 0)
    {
        cout<<endl<<x<<" e divisivel por 3"<<endl;
        return false;
    }
    else if ((x % 5) == 0)
    {
        cout<<endl<<x<<" e divisivel por 5"<<endl;
        return false;
    }
    else if ((x % 7) == 0)
    {
        cout<<endl<<x<<" e divisivel por 7"<<endl;
        return false;
    }
    else
        return true;
}

int main()
{
    int num;

    cout<<"Insira o numero para verificar se e primo: "; cin>>num;

    if (verificaPrimo(num) == true )
        cout<<"\nVerdadeiro, o numero e primo";
    else
        cout<<"\nFalso, o numero nao e primo";
    
    return 0;
}