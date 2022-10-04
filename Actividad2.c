#include <stdio.h>
#include </usr/include/linux/types.h>
#include <unistd.h>
#include <stdlib.h>
#include </usr/include/linux/wait.h>
#include <sys/wait.h>

void pruebaParametros(int args, char ** argv){
    printf("El numero de argumentos son %d\n", args);
    for (int i = 0; i<args; i++){
        printf("Arg(%d = %s\n", i, argv{i});
    }
}
int main(){
    pid_t pid;
    int status;
    char *argumentos[3] = {"ls", "-l", NULL};
    pid = fork();

    printf("el valor del pid del hijo es: %d", pid);
    printf("El valor del pid del padre es: %d", getpid());

    switch(pid){
        case -1:
            printf("Error de fork\n");
            exit(-1);
            break;
        case 0:
            if execvp(argumentos[0], argumentos){
                printf("Error")
                exit(-2);

            }
            printf("Error de exec. Si todo ha ido bien esto no se ejecuta");
            break;
        default:
            printf("Pid del padres es %d y el del hijo", getpid(), pid);
            wait(&status);
            break;
    }
    return 0;
}