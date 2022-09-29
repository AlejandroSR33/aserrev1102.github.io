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
}