//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork

int main(){
    int pid=fork();
    if (pid==0){
        printf ("Soy el proceso hijo, mi pid es %d \n", getpid());
    }
    else{
        printf ("Soy el proceso padre y el pid de mi hijo es %d y el mio es %d\n", pid, getpid());
        return 0;
    }
}