//test in 1000 numbers


//Reverse
// input: 243
// output: 342

#include<stdio.h>

void palindromo(int x);

int main(int argc, char const *argv[])
{
    int number,s=0,hold;
    printf("Ingresa el numero: ");
    scanf("%d",&number);
    for (int i = 0; i < 10000; i++)
    {
        palindromo(i);     
    }


    return 0;
}


void palindromo(int x){
    
    int number=x,s=0,hold;
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
        printf("\t%d\t",s);
        
    }
    else
    {
//        printf("Resultado no es palindromo : %d",s);
    }

}