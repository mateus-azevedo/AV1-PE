#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int numeros[5][5], continua, i, j, c, l;

srand(time(NULL));

for (i=0;i<5;i++){     
    for (j=0;j<5;j++){ 
        do{   
            continua=0;
            numeros[i][j]=rand()%99; /* gera numeros aleatorios até 99 */

            for (l=0;l<5;l++){
                for (c=0;c<5;c++){
                  if (numeros[i][j]==numeros[l][c] && (i!=l && j!=c)){  /* comparando os numeros para ve se são iguais */
                  continua++;
                  }
                }
            }
             } while(continua!=0); /* se mantem continuando até terminar o for */
    }
}
            for (l=0;l<5;l++)
            {
                for (c=0;c<5;c++)
                {
                   printf(" \t %d ", numeros[l][c]); /* imprime a cartela de numeros */ 
                }
                printf("\n");
            }
return 0;
}