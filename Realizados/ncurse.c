/*************************************************************************
                        Emmanuel Cruz Lopez
                Programa donde se utliza la libreria 
                            ncurse    
                            ncurse.c
                        Compilación:
                            Linux:
            gcc -Wall  ncurse.c -o ncurse
                            Windows:
            gcc -Wall  ncurse.c  -lncurses -o ncurse.exe
  ***************************************************************************/

/*dibujar_cuadro.c
ESTE PROGRAMA DIBUJA UN CUADRO. UTILIZA LA LIBRERIA curses.h QUE SUSTITUYE DE ALGUNA FORMAA LA      CONIO.H DEL VIEJO TURBO C
COMPILE ESTE PROGRAMA CON LA INSTRUCCION:  gcc dibujar_cuadro.c -o ejecutable -lncurses*/
#include <curses.h> //Incluiremos una librería a nuestro sistemas
#include <stdio.h>


void salir(void); //Esta funcion hará que nuestro programa se cierre
int main(void)
{
    int i;
    char c;
    initscr(); /*Esta función  inicializa  ncurses. Para todos los programas
            debemos siempre inicializar  ncurses y luego finalizarla, como
                 veremos adelante. */
    c = 95;    //caracter ascci horizontal
    for (i = 1; i <= 120; i++)
    {
        //linea horizontal superior
        move(1, i);      //Aqui estamos moviendo el cursor para a linea 1 columna i.
        printw("%c", c); //Imprimimos un texto en la posición establecida.
        //linea horizontal inferior
        move(40, i);     //Aqui estamos moviendo el cursor para a linea 40 columna i.
        printw("%c", c); //Imprimimos un  texto en la posición establecida.
    }
    c = 124; //caracter ascci vertical
    for (i = 2; i <= 40; i++)
    {
        //linea vertical izquierda
        move(i, 1);
        printw("%c", c);
        //linea vertical derecha
        move(i, 120);
        printw("%c", c);
    }
    refresh();
    //getch(); //si se desea hasta que se pulse una tecla
    sleep(3); //se detiene tres segundo
    salir();  // Salir del programa
}
/*********************************************************************/
void salir()
{
    endwin(); /*Siempre que finalizamos un programa con una biblioteca curses,
                    debemos ejecutar este comando.*/
    exit(0);
}