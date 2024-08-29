//prime number using function

//prime number


#include<stdio.h>

void primo(int x);

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingresa numero: ");
    scanf("%d",&n);
    primo(n);
    

    return 0;
}


void primo(int x){
    int c=0;
    for (int i = 1; i <= x; i++)
    {
        if (x%i==0)
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
};