/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa que  verificar si un caracter 
                es una mayuscula ,minuscula o digito      
                            lowerOrUpper.c
                        Compilación:
                            Linux:
            gcc -Wall  lowerOrUpper.c -o lowerOrUpper
                            Windows:
            gcc -Wall  lowerOrUpper.c -o lowerOrUpper.exe
  ***************************************************************************/

#include <stdio.h>
int main()
{
    char tecla;
    printf("Tecla=");
    scanf("%c", &tecla);
    if ((tecla >= 'a') && (tecla <= 'z')) printf("Es %c una letra minuscula ", tecla);
    else if ((tecla >= 'A') && (tecla <= 'Z')) printf("Es %c una letra mayuscula ", tecla);
    else if ((tecla >= '0') && (tecla <= '9')) printf("Es %c un numero ", tecla);
    else printf(" %c no es una letra ", tecla);
    return 69;
}