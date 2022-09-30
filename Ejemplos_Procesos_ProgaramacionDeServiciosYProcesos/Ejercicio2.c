//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
int main(){
    printf("Soy el padre, por cojones y generaré 8 procesos en forma de arbol binario\n");
    fork(); //po ó p1
    /**
    Despues puedo ser P0, Despues puedo ser p0 o p2
    **/
    fork(): //p0 o p2 p1 o p4
    /**
    Partiendo de P0, Despues puedo ser p0 o p2
    Partiendo de p1, Despues puedo ser p1 o p4
    **/
    fork():
    /**
    Partiendo de P0, Despues puedo ser p0 o p3
    Partiendo de p1, Despues puedo ser p1 o p5
    **/
    printf("Soy padre o un hijo?? \n");
    return 0;
    /**
    En este caso, este programa crea 8 procesos.
    En el primero ciclo o fork se crea un proceso padre y se hace una copia del proceso padre com proceso hijo
    En el segundo ciclo el padre crea un segundo hijo y el primer hijo pasa a ser el segundo padre y el segundo padre crea un tercer hijo
    En el tercer ciclo el padre crea un cuarto hijo y el segundo padre crea un quinto hijo. Ademas de que el segundo hijo y tercer hijo, pasan a ser
    tercer padre y cuarto padre, por lo tanto tendran un sexto hijo y un septimo hijo
    **/

}