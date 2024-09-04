#include <stdio.h>
#include <math.h>

void Armstrong(int x, int y);

int main(int argc, char const *argv[])
{
    int num, cn;
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    printf("Ingresa la cantidad de digitos del numero: ");
    scanf("%d", &cn);

    for (int i = 0; i < 100; i++)
    {
        Armstrong(num + i, cn);
    }

    return 0;
}

void Armstrong(int x, int y)
{
    int num = x, a = 0, hold = x;

    // Loop through each digit
    while (num > 0)
    {
        int digit = num % 10;
        a += pow(digit, y); // Calculate power and add to the total
        num /= 10;
    }

    // Print only if the number is an Armstrong number
    if (a == hold)
    {
        printf("\t\tEl numero %d es un 'Armstrong number'\n", hold);
    }
    else
    {
       printf("\tEl numero %d No es un 'Armstrong number'\n", hold);
    }
    
}
