#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int matriz[3][3] = {{1, -8, 5},{2, 2, 10},{20, 10, 3}};

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            //(j != 2) ? cout<<matriz[i][j]<<" " : cout<<matriz[i][j]<<endl;
            (j != 2) ? printf("%2d  ", matriz[i][j]) : printf("%2d\n", matriz[i][j]);
    
    return 0;
}