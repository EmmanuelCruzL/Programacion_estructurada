/*************************************************************************
                        Emmanuel Cruz Lopez
        Programa que resuelve una  Ecuacion de segundo grado           
                            ecuacion2grado.c
                            Compilacion:
                gcc -Wall  ecuacion2grado.c -o ecuacion2grado
  ***************************************************************************/
/*
  Ecuacion de segundo grado
  ax^2 +bx +c = 0
  FORMULA GENERAL
  a = 0 !Indeterminado
  Descrminante < 0  ==" Indefinido en R"
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("clear");
    system("figlet ecuaciones 2");
    float a, b, c, x1, x2, discri;
    printf("Valor a= ");
    scanf("%f", &a);
    printf("Valor b= ");
    scanf("%f", &b);
    printf("Valor c= ");
    scanf("%f", &c);
    if (a == 0)
    {
        printf("No es una ecuacion de segundo grado \n");
    }
    else
    {
        discri = pow(b, 2) - (4 * a * c);
        if (discri < 0)
        {
            printf("No hay solucion en R");
        }
        else
        {
            x1 = ((-1) * (b) + sqrt(discri)) / (2 * a);
            x2 = ((-1) * (b)-sqrt(discri)) / (2 * a);
            printf("Solucion x1 =%.4f\n", x1);
            printf("Solucion x1 =%.4f\n", x2);
        }
    }
    return 1;
}