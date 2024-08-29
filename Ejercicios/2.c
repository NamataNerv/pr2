//Calcular el factorial de un numero dado
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,r=1;
    printf("Ingresa un numero: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        r=(num-i)*r;
    }
    
    printf("Resultado: %d",r);

    
    return 0;
}