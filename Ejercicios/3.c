//suma de n numeros naturales
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,r=0;
    printf("Ingresa un numero: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        r=(num-i)+r;
    }
    printf("%d",r);

    return 0;
}