#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void pruebaParametros(int args, char ** argv)
{
    printf("El numero de argumentos son %d\n", args);
        for(int i = 0; i<args; i++){
            printf("Arg(%d) = %s\n", i, argv[i]);
        }
}

int main(int args, char argv){

    pid_t pid;
    int estado;
    pid = fork();
    char *argumentos[3] = {"ls","-l", NULL};
    switch (pid)
    {
    case -1:
        printf ("Error inesperado");
        exit(-1);
        break;

    case 0:
        printf ("Soy el proceso hijo y voy a ejecutar el ls -l con pid = %d, \n", getpid());
        if (execvp(argumentos[0],argumentos)){
            printf ("Error de cojones");
            exit(-2);
        }

        break;

    default:
        printf ("Soy el padre con pid %d y voy a esperar a mi hijo con pid %d\n", getpid(), pid);
        wait(&estado);
        break;
    }
    return 0;
}