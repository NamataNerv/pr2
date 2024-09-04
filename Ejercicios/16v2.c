//Reverse
// input: 243
// output: 342

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number,s=0;
    printf("Ingresa el numero: ");
    scanf("%d",&number);

    while (number>0)
    {
        s += number%10;
        s = s*10;
        number=number/10;
    }
    s = s/10;
    
    printf("Resultado es: %d",s);

    return 0;
}
