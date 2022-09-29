//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
int main(){
    fork();
    printf("Soy un proceso, padre o Hijo?");
    return 0;
}