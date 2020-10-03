#include <stdio.h>
#include <stdlib.h>

/*
Mateus Santos de Azevedo – 2020100086
Rhuan Gonzaga Cunha Francisco – 2020100052
Vinícius Silva de Oliveira – 2020101398
*/

main()
{
    int vetor[10], aux = 0;   
    
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor[%d]: ", i); scanf("%d", &vetor[i]);
    }

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

    system("cls");
    printf("\tELEMENTOS ORDENADOS\n  ");

    for (int i = 0; i < 10; i++)
    {
        (i < 9)? printf("%d, ", vetor[i]) : printf("%d.\n\n", vetor[i]);
    }

    system("pause");
    return 0;
}