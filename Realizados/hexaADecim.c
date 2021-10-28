/*************************************************************************
                        Emmanuel Cruz Lopez
        Programa que convierte caracter en hexadecimal a decimal                
                            hexaADecim.c
                            Compilacion:
                gcc -Wall  hexaADecim.c -o hexaADecim
  ***************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char tecla;
    printf("Tecla=");
    scanf("%c", &tecla);
    if ((tecla >= '0') && (tecla <= '9'))
    {
        printf("El digito hexadecimal %c a decimal es = %c\n ", tecla, tecla);
    }
    else
    {
        switch (toupper(tecla))
        {
        case 'A':
            printf("El digito hexadecimal %c a decimal es 10 \n", tecla);
            break;
        case 'B':
            printf("El digito hexadecimal %c a decimal es 11\n ", tecla);
            break;
        case 'C':
            printf("El digito hexadecimal %c a decimal es 1 2\n ", tecla);
            break;
        case 'D':
            printf("El digito hexadecimal %c a decimal es 13\n ", tecla);
            break;
        case 'E':
            printf("El digito hexadecimal %c a decimal es 14\n ", tecla);
            break;
        case 'F':
            printf("El digito hexadecimal %c a decimal es 15 \n ", tecla);
            break;
        default:
            printf("El digito  %c no es hexadecimal\n", tecla);
        }
    }
    return 0;
}