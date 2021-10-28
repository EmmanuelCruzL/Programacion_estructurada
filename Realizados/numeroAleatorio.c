/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa que genera un numero aletorio          
                            numeroAleatorio.c
                            Compilacion:
                gcc -Wall  numeroAleatorio.c -o numeroAleatorio
  ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int numero;
    numero = random();
    printf("numero aleatorio =%ld", numero);
    return 69;
}
