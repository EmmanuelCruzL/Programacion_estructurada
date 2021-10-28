/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa Uso de SIZEOF y Constantes para verificar
                            programa_cuatro.c
                            Compilacion:
                    gcc -Wall  programa_cuatro.c -lm -o programa_cuatro
  ***************************************************************************/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("char=%ld bytes\t unsiged=%ld\n", sizeof(char), sizeof(unsigned));
    printf("short int=%ld bytes\t int=%ld bytes\n", sizeof(short int), sizeof(int));
    printf("float=%ld bytes\t long=%ld bytes\t", sizeof(float), sizeof(long));
    printf("double=%ld bytes\t long double=%ld\n", sizeof(double), sizeof(long double));
    printf("Rango de entero: %d\t%d\n", INT_MIN, INT_MAX);
    printf("Rango de Long: %ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Rango de float:%f\t%f\n", FLT_MIN, FLT_MAX);
    printf("Rango de double:%E\t%E\n", DBL_MIN, DBL_MAX);
    //printf ("Rango de double largo:%g\t%g\n", LDBL_MIN, LDBL_MAX);

        return 0;
}

