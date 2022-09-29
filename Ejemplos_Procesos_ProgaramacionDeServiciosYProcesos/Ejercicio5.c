//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
#include <sys/types.h> //define tipos
#include <stdlib.h> //llamada exit

int main(){
    int op=1, estado;
    pid_t pid;

    pid = fork();
    switch(pid){
        case -1:
            printf("Ha pasado algo y error inesperado");
            exit(-1);
        case 0:
            printf ("Soy el hijo y mi pid es %d\n", getpid());
            break;
        default:
            printf ("Soy el padre con pid %d y siempre me esperare a que finalice primero mi hijo con pid %d \d", getpid()pid);
            wait(&estado);
    }