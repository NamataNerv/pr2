//Reverse
// input: 243
// output: 342

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number,s=0,hold;
    printf("Ingresa el numero: ");
    scanf("%d",&number);
    hold=number;

    while (number>0)
    {
        s += number%10;
        s = s*10;
        number=number/10;
    }
    s = s/10;
    
    if (hold==s)
    {
        printf("Resultado es palindromo : %d",s);
        
    }
    else
    {
        printf("Resultado no es palindromo : %d",s);
    }
    

    return 0;
}