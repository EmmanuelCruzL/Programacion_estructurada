/*************************************************************************
                        Emmanuel Cruz Lopez
            Programa que genera un numero aletorio  de 1 a 6 
            donde el usuario debe adiviar el numero generado         
                            srandom.c
                            Compilacion:
                            Linux:
                gcc -Wall  srandom.c -o srandom
                            Windows:
                gcc -Wall  srandom.c -o srandom.exe
  ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long int n;
    printf("Ingrese un numero(entre 1 y 6)");
    scanf("%ld", &n);
    //srandom(time(NULL));
    long int numero;
    numero = random() % 6 + 1;
    if (n == numero)
    {
        printf("Felicidades \n El numero es %ld", numero);
    }
    else
    {
        printf("Numero erroneo");
    }
    //printf("numero aleatorio =%ld",numero);
    return 69;
}
