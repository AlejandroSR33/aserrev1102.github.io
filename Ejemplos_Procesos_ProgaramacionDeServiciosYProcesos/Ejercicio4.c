//@author Alejandro 2022/2023
#include <stdio.h> //imprenscindible para las E/S
#include <unistd.h> //imprescindible para las funciones con fork
void incrementa(){
    int conta = 1;
    if (fork()){
        for(int i = 0; i <5000000; i++);
    }
    else{
        for (int i = 0; i<50000; i++)
            conta = conta;
        printf ("Soy el hijo y voy a decremntar la variable conta = %d\n", --conta);
    }
}

int main(){
    incrementa();
    return 0;
}