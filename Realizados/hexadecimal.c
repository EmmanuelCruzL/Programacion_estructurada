/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa Para verifcar si un caracter es hexadecimal
                            hexadecimal.c
                            Compilacion:
                    gcc -Wall  hexadecimal.c -o hexadecimal
  ***************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char tecla;
    printf("Tecla=");
    scanf("%c", &tecla);
    if ((tecla >= 'a') && (tecla <= 'f'))
    {
        printf("Es %c un digito numerico ", tecla);
    }
    else
    {
        if ((tecla >= 'A') && (tecla <= 'F'))
        {
            printf("Es %c un digito hexadecimal ", tecla);
        }
        else
        {
            if ((tecla >= '0') && (tecla <= '9'))
            {
                printf("es %c digito hexadecimal \n", tecla);
            }
            else
            {
                printf("%c no es digito hexadecimal ", tecla);
            }
        }
    }

    return 1;
}
