// factors of a given number

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a ;
    printf("Ingresa un numero :: ");
    scanf("%d",&a);


    printf("Sus multiplos son :: ");
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            printf(" %d ",i);
        }   
    }
    
    
    return 0;
}
