/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa que verifica si un numero es primo🤠
                            primos.c
                        Compilación:
                            Linux:
            gcc -Wall  primos.c -o primos
                            Windows:
            gcc -Wall  primos.c   -o primos.exe
  ***************************************************************************/

#include <stdio.h>


int main()
{

    int numero, flag;
    flag = 0;
    scanf("%d", &numero);
    while (numero < 1 || numero > 50)
    {
        printf("el numero %d no se ecuentra en el rango 1 a 50 \n intente de nuevo \n", numero);
        scanf("%d", &numero);
    }
    //operacion = numero / 2;
    //printf("%d", operacion);
    for (int i = 2; i <= numero / 2; i++)
    {

        if ((numero % 2) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("el numero%d no es primo",numero);
    }
    else
    {
        printf("El numero %d es primo",numero);
    }
}