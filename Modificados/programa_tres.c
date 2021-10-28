/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa Uso de funcion de matematicas(sqrt)
                            programa_tres.c
                            Compilacion:
                    gcc -Wall  programa_tres.c -lm -o programa_tres
  ***************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    double x = 2.0, y;
    y = sqrt(x);
    printf("Raiz cuadrada de x = %lf =%lf \n",x,y);
    return 0;
}
