//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
#include <sys/types.h> //define tipos
#include <stdlib.h> //llamada exit
 void pruebaParametros(int args, char ** argv){
    printf("El numero de argumentos son %d\n", args);
    for (int i = 0; i<args; i++){
        printf("Arg(%d = %s\n", i, argv{i});
    }
}

int main(int args, char **argv){
    // pruebaParametros(args, argv);
    pid_t pid;
    int estado;
    pid = fork(); //creo un nuevo proceso
    switch(pid){
        case -1:
            printf("Error inesperado");
            exit(-1);
        case 0:
            printf("Soy el proceso hijo y voy a ejecutar el cat con pid = %d, \n", getpid());
            if (execvp(argv[1], & argv[1]) <0){
                printf("Error de cojones");
                exit(-2);
            }
            printf("Jaaaaa, ya he ejecutado el comando pasado y sigo siendo %d, que ha pasado?\n", getpid());
            break;
        default:
            printf ("Soy el padre con pid %d y voy a esperar a mi hijo con pid %d\n", pid);
            wait(&estado);
            break;
    }
}