//prime number


#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,c=0;
    printf("Ingresa numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            c++;
        }   
    }
    
    if (c==2)
    {
        printf("El numero es primo");
    } else
    {
        printf("El numero no es primo");
    }
    
    


    return 0;
}