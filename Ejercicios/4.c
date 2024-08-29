//factorial pero usando funciones
#include<stdio.h>

int factorial(int x){
    if (x==0){
        return 1;
    }
    return x*factorial(x-1);
}


int main(int argc, char const *argv[])
{
    int num,r=1;
    printf("Ingresa un numero: ");
    scanf("%d",&num);

    printf("Resultado: %d",factorial(num));

    
    return 0;
}