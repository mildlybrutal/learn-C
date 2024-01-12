#include <stdio.h>

int main()
{
    printf("Even numbers from 0-10 are: \n");
    int count = 0;
    for (int i = 0; i < 11; i += 2)
    {
        count ++;
        printf("%d\n",i);
    }
    printf("Total number of even numbers from 0-10 : %d\n",count);
}