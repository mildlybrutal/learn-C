#include <stdio.h>

int main()
{
    int a = 1;
    int b=2;
    float c = 1.2;
    char d = 'A';
    char str1[]="Method1";
    const char *str2 = "Method2"; 
    printf("Addition of integers are: %d\n",a+b);
    printf("float integers are: %f\n",c);
    printf("Characters are: %c\n",d);
    printf("Using character Arrays: %s\n",str1);
    printf("Using character pointers: %s\n",str2);
    return 0;
}