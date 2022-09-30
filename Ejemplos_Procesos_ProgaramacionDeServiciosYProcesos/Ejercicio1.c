//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
int main(){
    fork();//Este codigo se utiliza para crear un proceso
    printf("Soy un proceso, padre o Hijo?");
    return 0;
    
}//Este programa crear un proceso padre y hace una copia del proceso padre como proceso hijo
