/*************************************************************************
                        Emmanuel Cruz Lopez
        Programa que determina el mayor de tres numeros            
                        mayorDeTresNumeros.c
                            Compilacion:
            gcc -Wall  mayorDeTresNumeros.c -o mayorDeTresNumeros
  ***************************************************************************/


#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Ingrese el primer valor :");
    scanf("%d", &a);
    printf("Ingrese el segundo valor :");
    scanf("%d", &b);
    printf("Ingrese el tercer valor :");
    scanf("%d", &c);
    if (a > b && b > c)
    {
        printf("A es mayor  que B y C");
    }
    else
    {
        if (b > a && b > c)
        {
            printf("B es  mayor que A  y C");
        }
        else
        {
            printf("C es  mayor que A y B");
        }
    }
    return 0;
}
