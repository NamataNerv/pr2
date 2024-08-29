//prime number in range


#include<stdio.h>

void primo(int x);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingresa numero a: ");
    scanf("%d",&a);
    printf("Ingresa numero b: ");
    scanf("%d",&b);

    for (int n = a; n <= b; n++)
    {
        //printf("Numero %d: ",n);
        primo(n);
    }
    
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
        //printf("Primo\n");
        printf("%d \n",x);
    } 
};