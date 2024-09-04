//Encontrar suma de digitos de un numero dado 
// input: 243
// output: 2+4+3

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number,s=0;
    printf("Ingresa el numero: ");
    scanf("%d",&number);

    while (number>0)
    {
        s += number%10;
        number=number/10;
    }
    
    printf("Resultado es: %d",s);


    return 0;
}
