#include <stdio.h>
#include <stdlib.h>

main()
{

    int vetor[10] = {9, 6, 7, 2, 5, 3, 8, 4, 1, 10}, aux = 0;   

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vetor[j] > vetor[i])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux; 
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
}