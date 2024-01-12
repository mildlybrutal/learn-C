#include <stdio.h>

void conditionals()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a > b)
    {
        printf("a is greater than b");
    }
    else if (a < b)
    {
        printf("a is less than b");
    }
    else
    {
        printf("a is equal to b");
    }
    
    
}

int main()
{
    conditionals();  
}